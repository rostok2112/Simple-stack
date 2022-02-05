# How to. Simple guide and docs.
## Functions and methods
### stack_push()
Method **stack_push** - pushing new element to the top of the stack
#### Arguments:
>- Stack_t **head - pointer to the top of the stack
>- void *value - new element. May be a simple type like int or double, but wrapped by pointer to Cast_t type or a pointer to the structure/union etc.
### stack_pop()
Method **stack_pop** - removes and returns an element from top of the stack
#### Arguments:
>- Stack_t **head - pointer to the top of  the stack
#### Return value
>- void *value - element that removed from the top of the stack
### stack_top()
Method **stack_top** - returns but not removes an element from top of the stack
### new_cast()
Method **new_cast** - returns new Cast_t pointer

#### Return value
>- Cast_t *cast - new copy of Cast_t
## Types and classes
### Stack_t
Class **Stack_t** - implements stack
#### Fields
>- struct Stack *next - pointer to next element of stack
>- void *value - current element
### Cast_t
Type **Cast_t** - Union that enables to push a simple type values to a stack like an element
#### Fields
>- double d 
>- long long int lli 
>- unsigned long long int ulli 
>- float f 
>- int i 
>- unsigned int ui 
>- short si 
>- unsigned short usi 
>- char c 
