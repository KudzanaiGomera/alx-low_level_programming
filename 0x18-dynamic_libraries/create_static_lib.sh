#!/bin/bash
gcc -c *.c
ar rc libdynamic.so *.o
