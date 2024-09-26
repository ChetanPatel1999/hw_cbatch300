// wap to check given number is positive-even , positive-odd
//  nagative-even or nagative-odd.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);//9
    if (num % 2 == 0)
    {
        if (num > 0)
        {
            printf("positive-even");
        }
        else
        {
            printf("nagative -even");
        }
    }
    else
    {
        if (num > 0)
        {
            printf("positive-odd");
        }
        else
        {
            printf("nagative -odd");
        }
    }
}