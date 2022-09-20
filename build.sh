#! /bin/bash

type_lib="STATIC"
if [ -n "$1" ]
then
type_lib=$1
else
:
fi
echo "Type of lib: $type_lib"
cmake  -S . -B build/ -DTYPE_LIB=$type_lib
cd build/
make
cd ../export
ls
