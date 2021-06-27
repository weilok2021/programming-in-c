#include <stdio.h>

int main(void)
{
    int a = 1025;
    int *p = &a;
    // this is how binary works for 1025
    //00000000 00000000 00001000 00000001
    printf("the address of p is %p\n", p);
    printf("the value of p is %i\n", *p);
    char *p1 = (char*) p; // pointer to int become pointer to char
    printf("the address of p1 is %p\n", p1);
    printf("the value of p1 is %p\n", (p1 + 1));
    // pointer p1 points to the address of p
    // which is the first byte 00000001, and so the value is 1
    // when I do *(p1+1), the address is changes to the next byte after it.
    // which is 00000100, and so the value is 4.
}