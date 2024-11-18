#include<stdio.h>
void fun(int *a)// a=n
{
 printf("a= %d\n",*a);//12
 *a=90;
 printf("a= %d\n",*a);//90
}
void main()
{
 int n=12;
 fun(&n);
 printf("n = %d\n",n);//90
}