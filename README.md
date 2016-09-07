# Example FLV plugin for VLC media player, written in Rust

This project generates a dynamic library that can be loaded directly
by VLC media player. It recognizes FLV file, thanks to the
[flavors nom parser](https://github.com/Geal/flavors), written with nom.

It also uses a [separate project](https://github.com/Geal/vlc_module.rs)
to import VLC function definitions and some helper macros.
