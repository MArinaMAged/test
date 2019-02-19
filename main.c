#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    stacktype x;
    int b;
    create(&x);
   push(&x,5);
   push(&x,15);
   push(&x,20);
   push(&x,7);

   pop(&x,&b);
   pop(&x,&b);

   printf("the last element is %d \n ",b);

    return 0;
}
