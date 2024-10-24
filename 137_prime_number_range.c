// wap to print prime number serise in c .
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
void range(int s, int e)
{
    int i;
    for (i = s; i < e; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
}
void main()
{
    range(1, 100);
}