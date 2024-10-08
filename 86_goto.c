// wap to print 1 to 20 even numbers using goto stmnt.
#include<stdio.h>
void main()
{
 int i=1;
 lable:
 if(i%2==0)
 {
    printf("%d ",i);
 }
 i++;
 if(i<=20)
 {
    goto lable;
 }
 
}