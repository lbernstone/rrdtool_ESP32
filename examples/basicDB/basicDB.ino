#include <rrd.h>
#include <FFat.h>
#include <Ticker.h>
#include <WiFi.h>
#include <WebServer.h>
#include "web_chart.h"

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
char* dumpStr;

Ticker tkFillDSa, tkFillDSb;
WebServer server(80);

void fillDSa() {
  log_i("Adding data");
  char* rrd_updater[1] =  {"N:12:12"};
  if (rrd_update_r(full_filename, NULL, 1, (const char**)&rrd_updater)) {
    log_e("Unable to add data to %s", full_filename);
  }
}

void fillDSb() {
  
}

void handleDump() {
    char outfile[21];
    char outfilef[26];
    snprintf(outfile,256,"/%ld.xml", time(NULL));
    snprintf(outfilef,256,"/ffat%s", outfile);
    log_i("outfile: %s", outfilef);
    rrd_dump_r(full_filename, outfilef);
    File rrdfile = FFat.open(outfile);
    server.streamFile(rrdfile, "application/xml");
    rrdfile.close();
    unlink(outfilef);
    log_i("dump complete");
}

void setup() {
  Serial.begin(115200);
  FFat.begin(true);
  if (!FFat.exists(filename)) {
    FFat.remove(filename);
    log_i("creating file");
    if (rrd_create(argc, (char**)rrd_test) == -1) {
      log_e("Unable to create rrd: %s", filename);
      return;
    }
  }
  WiFi.begin();
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
  server.on("/", []() {server.send(200, "text/html", indexHtml);});
  server.on("/dump", handleDump);
  server.on("/Chart.js", []() {server.send(200, "application/javascript", chartJs);});
  server.serveStatic(filename, FFat, filename, "no-cache");
  server.begin();
  fillDSa();
  tkFillDSa.attach(10, fillDSa);
  tkFillDSb.attach(120, fillDSb);
}

void loop() {
  delay(250);
  server.handleClient();
}
