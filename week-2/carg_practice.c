#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // this is a condition that print hello and the second arg from user
    // i.e if arg count is equal to 2 print hello and the second arg provided by the user in the command line
    if (argc == 3)
    {
        printf("hello, %s %s\n", argv[1], argv[2]);
    }

    // else just print hello, world
    else
    {
        printf("hello, world\n");
    }
}