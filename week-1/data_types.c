#include <stdio.h>

int main(void)
{
    char name[3];
    name[0] = 'A';
    name[1] = 'Y';
    name[2] = 'O';

    printf("Hello, %c%c%c\n", name[0], name[1], name[2]);
}
