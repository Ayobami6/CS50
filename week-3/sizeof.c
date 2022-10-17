#include <stdio.h>
/**
3  * main - main block
4  * Return: 0
5  */
int main(void)
{

    printf("Size of a char: %li byte(s)\n", sizeof(char));
    printf("Size of an int: %li byte(s)\n", sizeof(int));
    printf("Size of a long int: %li byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
    printf("Size of a float: %li byte(s)\n", sizeof(float));
    return (0);
}
