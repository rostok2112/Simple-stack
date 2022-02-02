#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct Stack  Stack_t;
void stack_push(Stack_t **head, void *value);
void *stack_pop(Stack_t **head);
void *stack_top(const Stack_t *head);

#endif // STACK_H_INCLUDED
