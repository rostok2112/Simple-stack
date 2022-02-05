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

## Compile

Just run in **src/code**
```
gcc -c stack.c -o stack.o -I../../include
ar rc libstack.a stack.o
```

## Usage 

Just move **stack.h** from **export/**  to **include/** dir and move  **libstack.a**  to **lib/** dir of your project

Compile example with this lib: 
```
gcc somesource.c -lstack -L../../lib -I../../include
```