#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fpic *.c
gcc -shared -o liball.so *.o
export LD_LIBRARy_PATH=.:$LD_LIBRARy_path
