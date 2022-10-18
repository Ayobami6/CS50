#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);       /*Prints out the character in the address*/
    printf("%c\n", *(s + 1)); /*prints out the second character*/
    printf("%c\n", *(s + 2)); /*prints out the third character*/
}