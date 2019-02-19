#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define max 20



typedef int stacktype[max];


void create(stacktype *s);
void push(stacktype *s,int item);
void pop(stacktype *s, int *item);


#endif // STACK_H_INCLUDED
