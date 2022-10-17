#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    string names[] = {"Ayo", "Tunde"};
    string numbers[] = {"07033473529", "08174576228"};

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "Seyi") == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found \n");
    return 1;
}
