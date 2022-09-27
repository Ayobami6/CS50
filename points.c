#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int MINE = 2;

    int points = get_int("How many points di you lose? ");

    if (points < 2)
    {
        printf("You lost fewer points than me.\n ");
    }

    else if (points > 2)
    {
        printf("You ost more points than me.\n");
    }

    else
    {
        printf("You lost te same as me.\n");
    }
}
