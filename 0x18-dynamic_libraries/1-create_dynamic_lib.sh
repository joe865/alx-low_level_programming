#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
export LD_LIBARY_PATH=.:$LD_LIBARY_PATH
