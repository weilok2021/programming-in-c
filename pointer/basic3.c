/* Call by dereference but not call by value, we would only manipulate the value stored in the address rather than 
copying the variable as a local variable.*/

#include <stdio.h>

void increment(int *a); 

int main(void)
{
    int a = 10;
    increment(&a);
    printf("%i ", a);
}

void increment(*a)
{
    *a = *a + 1;
}
