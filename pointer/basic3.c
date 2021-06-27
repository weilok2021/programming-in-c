/* Call by dereference but not call by value, we would only manipulate the value stored in the address rather than 
copying the variable as a local variable.*/

#include <stdio.h>

void increment(int *a); 
void increment2(int a);

int main(void)
{
    int a = 10;
    increment(&a);
    printf("%p\n", &a);
}

void increment(int *a)
{
    *a = *a + 1;
}

void increment2(int a)
{
    a = a + 1;
    printf("%p\n", &a);
}

/* In this program, the address of the original a and the a declared in the function as local variable are different
, it proves that using local varaible takes more memory to store new value and variable in stack.*/
