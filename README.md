Arduino RRD library
===================

This is a port of the Round Robin Database Tool [rrdtool](https://oss.oetiker.ch/rrdtool/) to the ESP32 for use in simple web page delivery of graphs and data for IoT data sensors.

The source library uses glib for graphics.  ESP32 doesn't have a lot of core libraries needed for that, and doesn't really have the horsepower anyhow.  Use [javascriptRRD](http://javascriptrrd.sourceforge.net/) to have the client present the data, delivering the raw rrd files.

## Notes on using rrdtool on ESP32

1) You must use FAT.  rrdtool relies on seeking through a fixed data structure and replacing just the bits that have changed.  The lseek on the other embedded filesystems (SPIFFS, LittleFS, etc) is not efficient enough to handle this, and your updates will never complete.
2) rrdtool is expecting posix-style vfs names.  I recommend using vfs names and functions in all cases.
3) All the work you do in rrdtool is time based.  If you don't have a synced time (eg you are not connected to the internet), your time will be very low.  Since many defaults are relative (eg, the last update when you create an rrd), you can end up with negative times!  This will cause things to crash and burn.
4) graph and xport require glib.  I may at some point implement the needed pieces for that, but it ain't today.  The only way to get your data out is directly as the rrd, or an xml dump.
5) I added a function rrd_create_str(const char\* CmdString)) to make it a bit easier to feed rrd_create.  It tokenizes a single char array into the argv\*\* format of cli tools.
6) The larger your file is, the slower the seek.  Keep It Simple, Stupid.  One data source; keep it under 60k total.
7) I added a single global mutex to rrd_update.  This means only one file can be written at a time.  This should only be an issue if you are trying to do large, slow updates on multiple rrds.  Don't do that.

Thanks to Tobi Oetiker (http://www.oetiker.ch) for writing rrdtool  
Thanks to Frank Wuerthwein & Igor Sfiligoi (http://javascriptrrd.sourceforge.net) for javascriptRRD
