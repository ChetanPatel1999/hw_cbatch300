// wap to dipsply only even element form array.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d",&n);
    int arr[n], i;
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
     printf("\neven array element are : \n");
    for (i = 0; i < n; i++)
    {
       if(arr[i]%2==0)
       {
         printf("%d ", arr[i]);
       }
    }
}