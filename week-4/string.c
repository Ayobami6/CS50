#include <stdio.h>

int main(void)
{
    typedef char *string;

    string name = "Ayobami";

    printf("%s is the name\n", name);
    printf("%i\n", name[2]);
}