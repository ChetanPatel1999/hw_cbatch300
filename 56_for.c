// wap to print even number between 1 to 20. 
#include <stdio.h>
void main()
{
    int i;
    printf("even numbers : ");
    for (i = 1; i <= 20; i++)//4
    {
        if(i%2==0)
        {
            printf("%d ", i);// 2  
        }
    }
}