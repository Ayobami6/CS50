#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *word = "Hello";
    char c;
    int count = 0;
    char lower[100];

    for (int a = 0; a < strlen(word); a++)
    {
        lower[a] = tolower(word[a]);
    }
    printf("%s\n", lower);
    for (int i = 0; i < strlen(lower) + 1; i++)
    {
        for (c = 'a'; c <= lower[i]; c++)
        {
            count++;
            if (c == lower[i])
            {
                printf("%c %d %i\n", c, count, i);
                count = 0;
                break;
            }
        }
    }
    printf("%c\n", word[0]);
    putchar('\n');
}
int c = 0;