#include <stdio.h>
#include <stdlib.h>

/*Delibrate mistake code*/

int main(void)
{
    int *x = malloc(3 * sizeof(int));

    x[0] = 72;

    x[1] = 34;

    x[2] = 67;

    free(x);
}
