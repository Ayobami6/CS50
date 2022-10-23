#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * Copy version 2 using memory allocation malloc and fre
 */

int main(void)
{
    char *s = get_string("Whats s: ");

    char *t = malloc(strlen(s) + 1); /*takes number of bytes as an argument*/

    if (t == NULL) /*incase malloc gives no memory address*/
    {
        puts("error");
        return 1;
    }

    strcpy(t, s); /*copied s to dynamic allocated memory created usng malloc */

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]); /*Changing the first char of t to upper case*/
    }

    printf("s is %s\n", s);
    printf("t is %s\n", t);

    free(t); /*freeing memory*/
    return 0;
}

/**
 * Manipulation of s reflects in t because they are pointing to the same address
 */