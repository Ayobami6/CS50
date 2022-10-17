#include <stdio.h>
#include <cs50.h>

/*Switch no breaks*/
int main(void)
{
    int n = get_int("Number: ");
    switch (n)
    {
    case 2:
        printf("Two\n");
    case 3:
        printf("Three\n");
    case 4:
        printf("Four\n");
    default:
        printf("Thats all\n");
        break;
    }
}