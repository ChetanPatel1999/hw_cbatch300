//pointer to array
#include<stdio.h>
void main()
{
 int arr[5],i,*ptr;
 ptr=arr; // &arr[0];
 printf("enter array element : ");
 for(i=0;i<5;i++)
 {
    scanf("%d",(ptr+i));
 }
 printf("display array element ");
 for(i=0;i<5;i++)
 {
    printf("%d ",*(ptr+i));//12 34 56 78 90 
 }
}