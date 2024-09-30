//wap to print sum 1 to 10;
#include <stdio.h>
void main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++) // 11
    {
        sum += i; // 55 sum=sum+i;
    }
    printf("sum of  1 to 10 = %d",sum);
}