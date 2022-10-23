#include <stdio.h>

int fact(int n);

int main(void)
{
    int n;
    printf("n: ");
    scanf("%i", &n);

    printf("%i\n", fact(n));
}

int fact(int n)
{
    if (n == 1) /*base case for recursive function, more like a condition to stop the infinite loop*/
        return 1;
    else
        return n * fact(n - 1); /* recursive case, to keep reducing n*/
}