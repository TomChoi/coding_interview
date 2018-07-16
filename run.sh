#!/bin/bash

if [ ! -d "build" ]; then
  mkdir build
fi

cd build

# run cmake
cmake ..



if [ $# -eq 0 ]
then
  # run compile and execute all unit test using make tool
  make
else
  for qestion in "$@"
  do
    make $qestion"_test"
  done
fi
