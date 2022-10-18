#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]); /*%p prints the pointer's value, meaning the variable address in location */
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

/*The address of the first character in the string is the same as the string variable s*/
