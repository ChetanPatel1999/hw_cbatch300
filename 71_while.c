//wap to print only even digit of given number.
#include<stdio.h>
int main()
{
 int num,rem;
 printf("enter a num : ");
 scanf("%d",&num);//342
 printf("only even number : ");
 while(num)
 {
  rem=num%10;
  if(rem%2==0)
  {
    printf("%d",rem);
  }
  num=num/10;
 }

 
}