// wap to find greatest number btween three numbers without using logical and operator.
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter three number  : ");
    scanf("%d%d%d", &num1, &num2, &num3); // 13 55 177
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("max num : %d", num1);
        }
        else
        {
            printf("max num : %d", num3);
        }
    }
    else
    {

        if (num2 > num3)
        {
            printf("max num : %d", num2);
        }
        else
        {
            printf("max num : %d", num3);
        }
    }
}