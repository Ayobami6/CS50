#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Number: ");
    switch (n)
    {
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    default:
        break;
    }
}