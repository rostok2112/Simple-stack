# Simple stack
Simple stack on void pointers(for value) and  based on linked list. For own-use.

## Tools

GCC and Make
```
sudo apt install build-essential
```
CMake
```
sudo apt install cmake
```

## Depends

No depends

## Build

Just run 
```
sh build.sh 
```

## Usage 

Just move **stack.h** from **export/**  to **include/** dir and move  **libstack.a**  to **lib/** dir of your project

Compile example with this lib: 
```
gcc somesource.c -lstack -L./lib -I./include
```

Examples of usage and docs inside **example/** dir