#include <stdio.h>
int factorial(int num)//4
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

void main()
{
    printf("factorial = %d\n", factorial(5));
    printf("factorial = %d\n", factorial(4));
    printf("factorial = %d\n", factorial(3));
}