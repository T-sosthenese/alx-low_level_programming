#!/bin/bash
gcc -c -g -fPIC *.c
gcc -shared -o liball.so *.o
