#!/bin/bash

if [ ! -d "build" ]; then
  mkdir build
fi

cd build

# run cmake
cmake ..

# run compile and execute unit test using make tool

make
