#ifndef TYPES_CAST_H_INCLUDED
#define TYPES_CAST_H_INCLUDED

#include <types.h>

typedef union Cast {
    double d;
    long long int lli;
    unsigned long long int ulli;
    float f;
    int i;
    unsigned int ui;
    short si;
    unsigned short usi;
    char c;
} Cast_t;

Cast_t *new_cast(void);

#endif // TYPES_CAST_H_INCLUDED