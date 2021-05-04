#!/bin/bash
wget -O /tmp/cracking_output.so https://raw.github.com/kateincoding/holbertonschool-low_level_programming/main/0x18-dynamic_libraries/cracking_output.so
export LD_PRELOAD=/tmp/cracking_output.so
