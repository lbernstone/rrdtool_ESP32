#include <rrd.h>
#include <FFat.h>
#include <Ticker.h>
#include <WiFi.h>
#include <WebServer.h>
#include <ESPAsyncWebServer.h>
#include <Update.h>

size_t content_len; //for updater
char filename[] = "/test.rrd";
char full_filename[] = "/ffat/test.rrd"; // Must use full mounted path
int argc = 8;
// -s300 DS:a:GAUGE:600:U:U DS:b:GAUGE:600:U:U RRA:AVERAGE:0.5:1:300 RRA:MIN:0.5:12:300 RRA:MAX:0.5:12:300
char* rrd_test[8] =  {"rrd_create", //Argv[0] will be ignored
                      full_filename,
                      "-s300",
                      "DS:a:GAUGE:600:U:U",
                      "DS:b:GAUGE:600:U:U",
                      "RRA:AVERAGE:0.5:1:300",
                      "RRA:MIN:0.5:12:300",
                      "RRA:MAX:0.5:12:300" };
char ntpSrv[] = "pool.ntp.org";

Ticker tkFillDSa, tkFillDSb;
WebServer server(80);

void handleUpdate(AsyncWebServerRequest *request) {
  char html[] = "<form method='POST' action='/doUpdate' enctype='multipart/form-data'><input type='file' name='update'><input type='submit' value='Update'></form>";
  request->send(200, "text/html", html);
}

void handleDoUpdate(AsyncWebServerRequest *request, const String& filename, size_t index, uint8_t *data, size_t len, bool final) {
  if (!index){
    Serial.println("Update");
    content_len = request->contentLength();
    int cmd = (filename.indexOf("spiffs") > -1) ? U_SPIFFS : U_FLASH;
    if (!Update.begin(UPDATE_SIZE_UNKNOWN, cmd)) Update.printError(Serial);
  }

  if (Update.write(data, len) != len) Update.printError(Serial);

  if (final) {
    AsyncWebServerResponse *response = request->beginResponse(302, "text/plain", "Please wait while the device reboots");
    response->addHeader("Refresh", "20");  
    response->addHeader("Location", "/");
    request->send(response);
    if (!Update.end(true)){
      Update.printError(Serial);
    } else {
      Serial.println("Update complete");
      Serial.flush();
      ESP.restart();
    }
  }
}

void asyncUpdate(uint16_t port) {
  static AsyncWebServer updater(port);
  updater.on("/update", HTTP_GET, [](AsyncWebServerRequest *request){handleUpdate(request);});
  updater.on("/doUpdate", HTTP_POST,
    [](AsyncWebServerRequest *request) {},
    [](AsyncWebServerRequest *request, const String& filename, size_t index, uint8_t *data,
                  size_t len, bool final) {handleDoUpdate(request, filename, index, data, len, final);}
  );
  updater.onNotFound([](AsyncWebServerRequest *request){request->send(404);});
  updater.begin();
}

void fillDSa() {
  log_i("Adding data");
  char* rrd_updater[1] =  {"N:12:12"};
  if (rrd_update_r(full_filename, NULL, 1, (const char**)&rrd_updater)) {
    log_e("Unable to add data to %s", full_filename);
  }
}

void fillDSb() {
  
}

void handleRoot() {
  char outfile[256];
  char outfilef[256];
  snprintf(outfile,256,"/%ld.xml", time(NULL));
  snprintf(outfilef,256,"/ffat%s", outfile);
  log_i("outfile: %s", outfilef);
  rrd_dump_r(full_filename, outfilef);
  File rrdfile = FFat.open(outfile);
  String content;
  while (rrdfile.available()) {
    char buf1[4096];
    size_t len = rrdfile.readBytes(buf1, 4096);
    if (len < 4096) buf1[len+1] = 0;
    content += buf1;
    delay(1);
  }
  unlink(outfilef);
  server.send(200, "text/xml", content);
}

void setup() {
  Serial.begin(115200);
  FFat.begin(true);
 
  //FFat.remove(filename);
  if (!FFat.exists(filename)) {
    log_i("creating file");
    if (rrd_create(argc, (char**)rrd_test) == -1) {
      log_e("Unable to create rrd: %s", filename);
      return;
    }
  }
  WiFi.begin("larryb","clownfish");
  if (WiFi.waitForConnectResult() != WL_CONNECTED) {
    log_e("Unable to connect to WiFi");
    return;
  }
  configTime(0,0,ntpSrv); //UTC time
  struct tm now;
  if (!getLocalTime(&now, 120000)) { //attempt for 120 seconds
    Serial.println("Unable to sync with ntp server");
    return;
  }
  delay(1);
  asyncUpdate(81);
  server.on("/", handleRoot);
  server.serveStatic(filename, FFat, filename, "no-cache");
  server.begin();
  fillDSa();
  tkFillDSa.attach(60, fillDSa);
  tkFillDSb.attach(120, fillDSb);
}

void loop() {
  delay(250);
  server.handleClient();
}
