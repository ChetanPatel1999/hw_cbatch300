#include<stdio.h>
void main()
{
 int i,n,tab;
 printf("enter a num :  ");
 scanf("%d",&n);
 printf("table of %d : \n",n);
 for(i=1;i<=10;i++)
 {
    tab=i*n;
    printf("%d\n",tab);
 }
}