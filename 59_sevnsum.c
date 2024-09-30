// wap to print sum of even number between 1 to 20. 
#include <stdio.h>
void main()
{
    int i,sum=0;
    for (i = 1; i <= 20; i++)//4
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("sum of even numers : %d",sum);
}