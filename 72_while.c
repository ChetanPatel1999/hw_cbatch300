//wap to print reverse of given number.
#include<stdio.h>
int main()
{
 int num,rev=0,rem;
 printf("enter a num : ");
 scanf("%d",&num);//342
 while(num)
 {
  rem=num%10;
  rev=rev*10+rem;//243
  num=num/10;
 }
 printf("reverse number  = %d",rev);
 
}