#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // this is a condition that print hello and the second arg from user
    // i.e if arg count is equal to 2 print hello and the second arg provided by the user in the command line
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }

    // else just print hello, world
    else
    {
        printf("hello, world\n");
    }
}

// Note the command line args are in string array called arg vector aka argv[]
// array index starts at 0 which is why last element of argv is argc -1