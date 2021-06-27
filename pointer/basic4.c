#include <stdio.h>

int main(void)
{
    int array[] = {5, 2, 3, 8, 10};
    printf("%p\n", &array[0]);
    printf("%p\n", array); // array itself stored the first bytes/chunk's address.
    for (int i = 0; i<5; i++)
    {
        printf("%i\n", array[i]);
        printf("%i\n", *(array + i));
    }
}

// using pointer arithmetic on array have the same effect as using indexing.
