#!/bin/bash

SOURCE_PACKAGES="$PWD/linux"
SOURCE_HARDWARE="$PWD/deauther-esp8266"
DEST_PACKAGES="$HOME/.arduino15/packages"
DEST_HARDWARE="$HOME/Arduino/hardware"

mkdir -p "$DEST_PACKAGES"
mkdir -p "$DEST_HARDWARE"

echo "Copying Linux packages..."
cp -Rf "$SOURCE_PACKAGES"/* "$DEST_PACKAGES/"

echo "Copying deauther-esp8266 hardware..."
cp -Rf "$SOURCE_HARDWARE" "$DEST_HARDWARE/"

echo "Installation completed successfully!"
echo "Please restart Arduino IDE"
