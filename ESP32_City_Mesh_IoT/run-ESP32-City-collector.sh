#!/bin/bash
echo Building ESP32 City Collector node project
. ./.env
. ./venv/bin/activate
echo Using USB PORT $USBPORT to upload and monitor code
# Compile and upload
echo Compiling ...
arduino-cli compile --fqbn esp32:esp32:esp32 ESP32-City-collector --build-property build.partitions=min_spiffs --build-property upload.maximum_size=1966080
echo Uploading ...
arduino-cli upload --port $USBPORT --fqbn esp32:esp32:esp32 ESP32-City-collector
