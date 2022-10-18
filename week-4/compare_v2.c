#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *s = get_string("Whats s: ");
    char *ss = get_string("Whats ss:");

    if (strcmp(s, ss) == 0)
        printf("Same\n");
    else
        printf("Different\n");
}