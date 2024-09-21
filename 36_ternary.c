// wap to find max number between two number.
#include <stdio.h>
void main()
{
    int num1,num2;
    printf("enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    num1 > num2 ? printf("max = %d",num1) : printf("max = %d",num2);
}