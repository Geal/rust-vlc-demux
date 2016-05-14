#!/bin/sh
install_name_tool -change "@loader_path/lib/libvlccore.8.dylib" "@loader_path/../lib/libvlccore.8.dylib" target/debug/librustdemux.dylib
cp target/debug/librustdemux.dylib VLC.app/Contents/MacOS/plugins/librustdemux_plugin.dylib
