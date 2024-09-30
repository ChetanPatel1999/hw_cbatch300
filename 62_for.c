//wap to count of factors of given number.
#include<stdio.h>
void main()
{
 int num,i,c=0;
 printf("enter a num : ");
 scanf("%d",&num);//12
 for(i=1;i<=num;i++)//6
 {
  if(num%i==0)
  {
    c++;//2
  }
 }
 printf("total factors of num : %d",c);
}