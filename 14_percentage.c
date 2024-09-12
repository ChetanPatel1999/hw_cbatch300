// wap to calculate percentage of student if marks are given by user.
#include<stdio.h>
void main()
{
 float hindi,english,math,per;
 printf("enter hindi marks : ");
 scanf("%f",&hindi);
 printf("enter english marks : ");
 scanf("%f",&english);
 printf("enter math marks : ");
 scanf("%f",&math);
 per=((hindi+english+math)/300)*100;
 printf("percentage : %.2f",per); 
}
