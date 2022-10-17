#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt user for agree
    char c = get_char("Do you agree?: ");

    // check  whether user agree
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
        return 0;
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Disagreed.\n");
        return 0;
    }
    printf("Neutral.\n");
    return 1;
}
