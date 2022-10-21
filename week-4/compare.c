#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_int("Whats i: ");
    int j = get_int("Whats j: ");

    if (i == j)
        printf("Same\n");
    else
        printf("Different\n");
}