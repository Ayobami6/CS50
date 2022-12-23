#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Struct here as a phonebook object*/

typedef struct phonebook
{
    char *name;
    char *number;
} phonebook;

int main(void)
{
    phonebook contacts[3];

    char contactname[50];
    printf("Enter Name:");
    scanf("%s", contactname);

    char *names[] = {"Ekem", "Ayo", "Jallow"};
    char *numbers[] = {"+2347886746673", "+234778746673", "+224978746673"};

    // contacts[1].name = "Ayo";
    // contacts[1].number = "+234778746673";

    // contacts[2].name = "Jallow";
    // contacts[2].number = "+224978746673";

    for (int j = 0; j <= 2; j++)
    {
        contacts[j].name = names[j];
        contacts[j].number = numbers[j];
    }
    // j = 2;
    for (int i = 0; i <= 2; i++)
    {
        if (strcmp(contacts[i].name, contactname) == 0)
        {
            printf("Found %s\n", contacts[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
