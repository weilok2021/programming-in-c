// problem encountered: couldn't dereference the value in pointers even I
// already stored the address of the pointer, the output should be any garbage
// value.

#include <stdio.h>

int main(void)
{
    int a = 5;
    int* p = &a;
    int** q = &p; // pointer q stores the address of pointer p.
    int*** r = &q; // r stored the address of pointer q
    printf("the address that p points to is: %p\n", p);
    printf("the address of pointer p is %p\n", q);
    printf("the address of pointer r points to is %i", ***r);
    printf("the value that p points to is %i\n", *p); // 5
    //printf("the value that q points to is %d\n", *q); // dereference the value at p.
    printf("the value of dereference q twice is %i\n", **q); // dereference twice and goes into the a // =5
}
