//goto example
#include<stdio.h>
void main()
{
 int i=1;
 lable:
 printf("hi students\n");
 i++;//3
 if(i<=5)
 {
    goto lable;
 }
 printf("after goto ");
 
}