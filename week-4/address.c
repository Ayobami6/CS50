#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;        // *p signifies a pointer because of
                        // the asterick before the letter
    printf("%p\n", p);  // %p -> pointers placeholders in c
    printf("%i\n", *p); // going into the pointers
}

// Pointers is a variable that stores the address or location in memory of some values (using & operator)
// * and variable to store a pointer number
