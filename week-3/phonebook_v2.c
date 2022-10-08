#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[2];

    people[0].name = "Ayo";
    people[1].name = "Tunde";
    people[0].number = "07033473529";
    people[1].number = "08174576228";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Ayo") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found \n");
    return 1;
}
