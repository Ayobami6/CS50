#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int h, s, b;

    do
    {
        // n = get_int("Width: ");

        h = get_int("Height: ");
        // s = get_int(" Size: ");
        s = 0;
        b = h;

    } while (h < 1 || h > 8);

    // for all i up to the forth
    for (int i = 0; i < h; i++)
    {
        s = s + 1;
        b = b - 1;

        for (int d = b; d > 0; d--)
        {
            printf(".");
        }

        for (int j = 0; j < s; j++)
        {
            printf("#");
        }

        // printf("#\n");

        // printf("?");

        // int h = h - 1;

        printf("\n");
    }

    // printf("\n");
}