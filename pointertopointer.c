#include <stdio.h>

int main(void)
{
    int a = 5;
    int *p = &a;
    int **q = &p; // pointer q stores the address of pointer p.
    printf("the address that p points to is: %p\n", p);
    printf("the address of pointer p is %p\n", q);
    printf("the value that p points to is %i\n", *p); // 5
    printf("the value that q points to is %i\n", *q); // dereference the value at p.
    printf("the value of dereference q twice is %i", **q); // dereference twice and goes into the a // =5
}
