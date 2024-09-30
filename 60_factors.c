//wap to print factors of given number.
#include<stdio.h>
void main()
{
 int num,i;
 printf("enter a num : ");
 scanf("%d",&num);//15
 printf("factors of %d :",num);
 for(i=1;i<=num;i++)//6
 {
  if(num%i==0)
  {
     printf("%d ",i);// 1 3 5
  }
 }
}