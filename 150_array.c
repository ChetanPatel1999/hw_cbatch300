//array element adresses  print using for loop.
#include<stdio.h>
void main()
{
 int arr[]={12,34,56,78,90};
 int i;
 printf("array element are : \n");
 printf("%d \n",arr);//&arr[0] print base address
 for(i=0;i<5;i++)
 {
    printf("%d\n",&arr[i]);
 }
}