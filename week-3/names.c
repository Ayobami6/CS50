#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    string names[] = {"Cole", "Bill", "Ayo", "Tunde", "Dami"};

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], "Ayo") == 0) // used the stringcompare function to compare 2 strings, 0 output means they are the same
        {
            printf("Found %s\n", names[i]);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}
