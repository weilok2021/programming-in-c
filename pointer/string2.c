#include <stdio.h>

void print(char *c);

int main(void)
{
    /*the difference between char c[] and char *c
        string get stored in array using char c[]
            char *c = "hello" points to string constant in the memory
                and cannot be modified. */


    char c[] = "hello";
    print(c);
    printf("%s", c);
    // c[0] = 'a'; we can't modify this, if it's string literal but not array
    // it's a string constant stored in text segment in the memory.
}


/*pointer and array are different data structure work in similar manner*/
//when passing in the array as an argument, it never copy the original array
//but working as a pointer to array to store the base address of an array,(c[0])
void print(char *c)
{
    int i = 0;
    c[0] = 'a';
    while (*c != '\0') // while the value dereferenced is not \0
    {
        printf("%c", c[i]);
        c++; // pointer go to the next address
    }
    printf("\n");
}
