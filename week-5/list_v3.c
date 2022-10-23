#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *list = malloc(3 * sizeof(int)); /*using the heap memory*/

    if (list == NULL)
        return 1;

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Times passes
    // need append more values but the memory size is 3
    int *tmp = realloc(list, 4 * sizeof(int)); /*creating temp arrays to copy list in it abd add more values*/

    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // add forth number to new array
    tmp[3] = 4;

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
    return 0;
}
