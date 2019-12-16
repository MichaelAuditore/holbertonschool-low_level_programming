#!/bin/bash
wget /tmp/ https://github.com/MichaelAuditore/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/100-operations.so
LD_PRELOAD = /tmp/:$LD_LIBRARY_PATH
