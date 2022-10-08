#include <cs50.h>
#include <stdio.h>

int add_two_nums(int num1, int num2); // declaring the prototype of the function

int main(void)
{
    int num1 = get_int("Whats number 1: ");
    int num2 = get_int("Whats number 2: ");

    int ans = add_two_nums(num1, num2);

    printf("This is the answer %i\n", ans);
}

// defining the add two numbers function

int add_two_nums(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}