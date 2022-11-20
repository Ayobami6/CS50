#include <stdio.h>

int sum(int a, int b);
void doNothing(void);
int main()
{
    int result = 0;
    void *f;

    f = doNothing;
    printf("%p", f);

    int (*fun_ptr)(int a, int b) = sum; // Creating a pointer function
    result = fun_ptr(5, 5);
    printf("%d\n", result);
}

// declaring the function
int sum(int a, int b)
{
    return a + b;
}

void doNothing(void)
{
    ;
}