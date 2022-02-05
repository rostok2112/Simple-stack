#include <stdio.h>
#include <stdlib.h>
#include <stack.h>

typedef struct User{
    char * name;
    int age;
} User_t;


int main()
{
    User_t *pUser1 = malloc(sizeof(User_t));

    Stack_t *head = NULL;

    pUser1->age = 15;
    pUser1->name = "Alina";

    stack_push(&head, pUser1);

    printf("User1:\n\tName:\t%s\n\tAge:\t%d\n", ((User_t *)stack_top(head))->name, ((User_t *)stack_top(head))->age);

    Cast_t *cast1 = new_cast();


    char * strName2 = calloc(12, sizeof(char));
    strName2 = (char []){'K', 'i', 'r', 'i', 'l', 'l', '\0'};
    stack_push(&head, strName2);
    *(int *)cast1 = 16;
    stack_push(&head, cast1); // pushed value of simple type - int

    printf("User2:\n\tName:\t%s\n\tAge:\t%d", (char *)stack_pop(&head), *(int *)stack_pop(&head));

    stack_pop(&head); // stack freed

    return 0;
}
