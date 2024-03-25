#!/bin/bash
gcc -c *.c -fpic && cc *o -shared -o liball.so *.o
