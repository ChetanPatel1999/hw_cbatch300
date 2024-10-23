// wap to to check prime number .
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num, i;
    printf("enter a num : ");
    scanf("%d", &num);
    if (num == 0 || num == 1)
    {
        printf("not prime number");
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("not prime number");
                exit(0);
            }
        }
        printf("prime number");
    }
}