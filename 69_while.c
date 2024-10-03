//wap to count digit in given number.
#include<stdio.h>
void main()
{
 int num,count=0;
 printf("enter a num : ");
 scanf("%d",&num);//342
 while(num)//num>0 // num!=0
 {
  num=num/10;
  count++;
 }
 printf("total digit in given number = %d",count);

 
}