//pointer to array
#include<stdio.h>
void main()
{
 int arr[5],i,*ptr;
 ptr=arr; // &arr[0];
 printf("enter array element : ");
 for(i=0;i<5;i++)
 {
    scanf("%d",ptr);
    ptr++;
 }

 ptr=arr;//400
 printf("display array element ");
 for(i=0;i<5;i++)
 {
    printf("%d ",*ptr);//12 34 56 78 90 
    ptr++;
 }
}