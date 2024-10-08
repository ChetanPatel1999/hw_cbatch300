// wap to print table of given number.
#include <stdio.h>
void main()
{
    int i = 1,n;
    printf("entera num : ");
    scanf("%d",&n);
lable:
    printf("%d \n", i*n);
    i++;
    if (i <= 10)
    {
        goto lable;
    }
}