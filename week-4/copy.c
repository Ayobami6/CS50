#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string s = get_string("Whats s:");

    string t = s; /*Copy s to t, this technically copy the address and all of s to t*/

    t[0] = toupper(t[0]); /*Changing the first char of t to upper case*/

    printf("s is %s\n", s);
    printf("t is %s\n", t);
}

/**
 * Manipulation of s reflects in t because they are pointing to the same address
 */