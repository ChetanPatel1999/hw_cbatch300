//array element adresses  print using for loop.
#include<stdio.h>
void main()
{
 int a[]={12,34,56,78,90};
 int i;
 printf("array element are : \n");
 printf("%d \n",a);//&arr[0] print base address
 for(i=0;i<5;i++)
 {
    printf("%d\n",&a[i]);
 }
}