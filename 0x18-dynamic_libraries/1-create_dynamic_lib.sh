#!/bin/bash

# Generate object files from all source files, making
#  Position Independent output object code
gcc -c -fPIC *.c

# Combining the object files into a dynamic library/
#  Shared object (.so)
gcc -shared -o liball.so *.o

# Removing the intermediate object files
rm *.o
