#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *s = get_string("Whats s: ");
    char *ss = get_string("Whats ss: ");

    if (strcmp(s, ss) == 0) /*if the string compare of both strings returns 0, means they are same*/
        printf("Same\n");
    else
        printf("Different\n");

    if (s == ss) /*This check the equality of the address location in memory*/
        printf("Same\n");
    else
        printf("Different\n");

    printf("%p\n", s);
    printf("%p\n", ss);
}

/**
 * The strcmp goes to the addresses and initialize a for loop compare the characters in the addresses
 * s and ss are stored in different address location, slightly different
 */