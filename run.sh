#! /bin/bash

executable=$1
mkdir -p bin

rm -rf *.o
gcc -c *.c
gcc -o ./bin/$executable *.o
rm -rf *.o