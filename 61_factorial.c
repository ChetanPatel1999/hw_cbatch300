//wap to print factorial of given number.
#include<stdio.h>
void main()
{
 int num,i,fact=1;
 printf("enter a num : ");
 scanf("%d",&num);//5
 for(i=1;i<=num;i++)//6
 {
   fact=fact*i;//120
 }
 printf("factorial of %d = %d ",num,fact);
}