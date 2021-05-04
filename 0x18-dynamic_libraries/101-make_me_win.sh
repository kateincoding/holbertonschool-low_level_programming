#!/bin/bash
wget -qO /tmp/cracking_output.so https://raw.githubusercontent.com/kateincoding/holbertonschool-low_level_programming/main/0x18-dynamic_libraries/cracking_output.so
export LD_PRELOAD=/tmp/cracking_output.so
