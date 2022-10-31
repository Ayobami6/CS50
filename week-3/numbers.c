#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // creating an arrays of integers numbers
    int numbers[7] = {4, 6, 8, 7, 7, 5, 0};

    // creating a Linear search

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 9)
        {
            printf("found\n");
            return 0; // return 0 means all goes well and return nothing
        }
    }
    printf("Not found\n");
    return 1;
}