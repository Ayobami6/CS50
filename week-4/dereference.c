#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*declaring a pointer variable x and y*/
    int *x;
    int *y;

    x = malloc(sizeof(int)); /*giving x a memory allocation, pointee*/

    *x = 43; /*dereferencing x i.e go in to x address and store the value 43*/

    *y = 45; /*comment this out before compiling or running cause this is wrong, y has no memory space might take on chunk spaces*/

    y = x;

    *y = 46;
}