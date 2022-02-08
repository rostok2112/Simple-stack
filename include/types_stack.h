#ifndef TYPES_STACK_H_INCLUDED
#define TYPES_STACK_H_INCLUDED

#include <types.h>

typedef struct Stack {
    struct Stack *next;
    void *value;
} Stack_t;

void stack_push(Stack_t **, void *);
void *stack_pop(Stack_t **);
void *stack_top(const Stack_t *);

#endif // TYPES_STACK_H_INCLUDED