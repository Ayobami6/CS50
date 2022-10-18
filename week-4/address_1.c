#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    char *p = &s[0];
    printf("%p\n", p); /*%p prints the pointer's value, meaning the variable address in location */
    printf("%p\n", s);
}

/*The address of the first character in the string is the same as the string variable s*/
