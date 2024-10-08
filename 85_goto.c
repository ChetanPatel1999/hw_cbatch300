// wap to print 1 to 10 number using goto stmnt.
#include<stdio.h>
void main()
{
 int i=1;
 lable:
 printf("%d\n",i);
 i++;
 if(i<=10)
 {
    goto lable;
 }
 
}