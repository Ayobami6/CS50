#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long x = get_long("X: ");

    long y = get_long("Y: ");

    long solve = x + y;

    printf("%li\n", solve);
}
