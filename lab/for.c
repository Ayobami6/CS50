#include <stdio.h>

int main (void)
{
    int i = 0;
    int c = 0;
    for (i; i < 4; i++)
    {
        printf("%i", i);
        c++;
    }
    printf("%i", i);
    printf("%i", c);
}