# Simple stack
Simple stack on void pointers(for value) and  based on linked list. For own-use.

## Depends

No depends

## Compile

Just run in **src/code**
```
gcc -c stack.c -o stack.o
ar rc libstack.a stack.o
```

## Usage 

Just move **stack.h** from **export/**  to **include/** dir and move  **libstack.a**  to **lib/** dir of your project

Compile example with this lib: 
```
gcc somesource.c -lstack -L../../lib -I../../include
```