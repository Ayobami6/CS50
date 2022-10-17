#include <stdio.h>

void meow(void); /*meow prototype*/

int main(void)
{

    int i = 0;

    while (i < 3)
    {
        meow();
        i++;
    }
}

void meow(void)
{
    printf("Meow \n");
}