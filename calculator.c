#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x ");

    // Prompt user for y
    int y = get_int("y "); // could use float too and get_float

    // Perform division

    float z = (float)x / (float)y; // converting x and y to float

    printf("%i\n", y + x) // takes in place holder %i i.e for integers just like {}.format in python %f for floats .2 in 2 places
}