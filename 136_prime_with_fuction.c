// wap to to check prime number .
#include <stdio.h>
int is_prime(int num)
{
    int i;
    if (num == 0 || num == 1)
    {
        return 0;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    if (is_prime(num))
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}