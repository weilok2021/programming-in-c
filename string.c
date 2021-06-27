#include <stdio.h>

void print(char *c);

int main(void)
{
    char c[6] = "Hello";
    char c2[20];
    // when char array is declared like this, null character is needed at
    // the end of array, we can use string literal instead. "string"
    for (int i = 0; i<10; i++)
    {
        c2[i] = 'A';
    }
    c2[10] = '\n';
    printf("%s\n", c2);

    // dont do this to the original array, this is not pointer variable. c = c+1;

    print(c);
}


/*pointer and array are different data structure work in similar manner*/
//when passing in the array as an argument, it never copy the original array
//but working as a pointer to array to store the base address of an array,(c[0])
void print(char *c)
{
    int i = 0;
    while (*c != '\0') // while the value dereferenced is not \0
    {
        printf("%c", c[i]);
        c++; // pointer go to the next address
    }
    printf("\n");
}
