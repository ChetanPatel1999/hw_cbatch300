// wap to print greates num btween two number.
#include <stdio.h>
int greatest(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
        return num1;
    else if (num2 > num3)
        return num2;
    else
        return num3;
}
void main()
{
    int n1 = 122, n2 = 889, n3 = 5678;
    printf("greatest num = %d", greatest(n1, n2, n3));
}