#!/bin/bash
gcc -c -Werror -Wall -Wextra *.c
ar -r liball.a *.o
ranlib liball.a
