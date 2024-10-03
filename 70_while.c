//wap to print sum of individual digit of given number.
#include<stdio.h>
int main()
{
 int num,sum=0,rem;
 printf("enter a num : ");
 scanf("%d",&num);//342
 while(num)
 {
  rem=num%10;
  sum=sum+rem;//9
  num=num/10;
 }
 printf("sum of individual digit of given number = %d",sum);
 
}