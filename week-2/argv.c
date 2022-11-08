#include <stdio.h>

typedef char *string;

int main(int argc, string argv[])
{
    // this is a condition that print hello and the second arg from user
    // i.e if arg count is equal to 2 print hello and the second arg provided by the user in the command line
    if (argc == 2)
    {
        printf("hello, %s arg count is: %d\n", argv[1], argc);
    }

    // else just print hello, world
    else
    {
        printf("hello, world\n");
    }
}

// Note the command line arg is an array of strings and the index of the first element is 0 which in this case is hello
// Thus index 1 will be what the user typed as second arg in the command line.