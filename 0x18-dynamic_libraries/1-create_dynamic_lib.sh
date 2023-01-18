#!/bin/bash
gcc -Wall -Wextra -Werror -pendantic -c fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBARY_PATH=.:$LD_LIBARY_PATH
