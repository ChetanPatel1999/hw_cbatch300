//pointer to array
#include<stdio.h>
void main()
{
 int arr[]={12,34,56,78,90};
 int i;
 int *ptr;
 ptr=arr; // &arr[0];
 for(i=0;i<5;i++)
 {
    printf("%d ",*ptr);//12 34 56 78 90 
    ptr++;
 }
}