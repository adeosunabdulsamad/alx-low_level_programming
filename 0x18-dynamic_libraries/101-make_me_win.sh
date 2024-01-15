#!/bin/bash
gcc -shared -fPIC -o mymalloc.so *.c -ldl
LD_PRELOAD=./mymalloc.so ./gm
