#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -Wl,-soname,libholberton.so -o libholberton.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
