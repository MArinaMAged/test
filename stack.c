
#include "stack.h"

void create (stacktype *s)
{
    (*s)[0]=0;

}

void push (stacktype *s , int item){

    (*s)[++(*s)[0]]= item;

}

void pop (stacktype *s, int *item){

    *item = (*s)[(*s)[0]--];

}
