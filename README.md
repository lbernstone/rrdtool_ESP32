Arduino RRD library
===================

This is an attempt to port rrdtool to the ESP32 for use in simple web page delivery of graphs and data for IoT data sensors.

There is no file locking mechanism in ESP32, so a mutex needs to be added around the file update lock routine.

The source library uses glib for graphics, and newer versions use glists for the data structures.  ESP32 doesn't really have a lot of core libraries needed for that, so my intention is to replace the graphing with GNU libplot.
