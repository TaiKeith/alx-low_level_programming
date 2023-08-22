#!/bin/bash
wget -P /tmp https://github.com/TaiKeith/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libmytest.so
export LD_PRELOAD=/tmp/libmytest.so
