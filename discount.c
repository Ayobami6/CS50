#include <cs50.h>
#include <stdio.h>
#include <math.h>

float discount(float regular_price, int percent_off);

int main(void)
{

    float regular_price = get_int("Regular Price: ");
    int percent_off = get_int("Percent Off: ");
    float sale = discount(regular_price, percent_off);

    printf("Sale Price Is %.2f\n", sale);
}

float discount(float regular_price, int percent_off)
{
    return regular_price * (100 - percent_off) / 100;
}