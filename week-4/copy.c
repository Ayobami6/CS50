#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string s = get_string("Whats s:");

    string t = s;

    t[0] = toupper(t[0]);

    printf("s is %s\n", s);
    printf("t is %s\n", t);
}