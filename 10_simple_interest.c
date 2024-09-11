//wap to calculate simple interset.
#include<stdio.h>
void main()
{
 float principle,rate,time,si,totalammount;
 printf("enter principle ammount : ");
 scanf("%f",&principle);
 printf("enter rate : ");
 scanf("%f",&rate);
 printf("enter time : ");
 scanf("%f",&time);
 si=(principle*rate*time)/100;	
 printf("simple interest : %.2f\n",si);
 totalammount=principle+si;
 printf("total ammount : %.2f",totalammount);
}
