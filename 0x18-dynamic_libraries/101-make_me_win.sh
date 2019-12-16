#!/bin/bash
wget -qO /tmp/jackpot.so https://github.com/MichaelAuditore/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/100-operations.so
export LD_PRELOAD=/tmp/jackpot.so
