#!/bin/bash
wget -qO /tmp/cracking_output.so https://github.com/kateincoding/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/cracking_output.so
export LD_PRELOAD=/tmp/cracking_output.so
