#include <stdio.h>

void recurse(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n);
    recurse(n - 1);
    printf("%d", n);
}

int main(void)
{
    int n = 4;
    recurse(n);
    printf("\n");
}