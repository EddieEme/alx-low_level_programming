#!/bin/bash
wget -p /temp https://github.com/EddieEme/alx-low_level_programming/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
