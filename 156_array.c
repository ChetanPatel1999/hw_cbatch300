//wap to take array element form user and print reverse them.
#include<stdio.h>
void main()
{
  int n,i;
  printf("enter array size : ");
  scanf("%d",&n);//10
  int arr[n];
  printf("enter array element : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("array element are : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  // code for display revrese element of array
  printf("\nreverse array element :  ");
  for(i=n-1;i>=0;i--)//-1
  {
    printf("%d ",arr[i]);//
  }
}