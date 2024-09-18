#include<stdio.h>
#include<math.h>
void main()
{
 float a=4,po=3,res,ci,p=500,r=2,t=5;
 res=pow(a,po);
 ci=p+pow((1+(r/100)),t); 
 printf("adress of a : %p\n",&a); 
 printf("size of a : %d\n",sizeof(a));
 printf("%.2f\n",res);
 printf("compound interest : %.2f",ci);
}