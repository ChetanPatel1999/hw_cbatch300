// wap to check given number is positive or nagative or Zero.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); //
    if (num > 0)
    {
        printf("num is positive");
    }
    else if (num < 0)
    {
        printf("num is nagative");
    }
    else
    {
        printf("num is zero");
    }
}