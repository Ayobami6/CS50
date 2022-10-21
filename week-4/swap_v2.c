#include <stdio.h>

void swap_int(int *a, int *b); /*now using pointers, address and dereference operator we can swap*/

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);

    swap_int(&x, &y); /*geting the address of an int*/

    printf("x is %i, y is %i\n", x, y);
}

void swap_int(int *a, int *b)
{

    int tmp = *a; /*go into a and get value and store to temp*/
    *a = *b;      /*go into b and get value then store into address of a*/
    *b = tmp;     /* store the value of tmp into the address of b*/
}