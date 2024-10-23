// wap to to check prime number .
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num, i, f = 0;
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
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            printf("not prime number");
        }
        else
        {
            printf("prime number");
        }
    }
}