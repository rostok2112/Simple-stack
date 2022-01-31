#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED

#include <stdlib.h>
typedef struct Stack {
    struct Stack *next;
    void *value;
} Stack_t;

void stack_push(Stack_t **head, void *value);
void *stack_pop(Stack_t **head);
void *stack_top(const Stack_t *head);

#endif // TYPES_H_INCLUDED
