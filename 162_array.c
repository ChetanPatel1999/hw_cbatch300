// wap to copy one array element into another array.
#include <stdio.h>
void main()
{
    int n, i;
    printf("entera array size : ");
    scanf("%d", &n);
    int arr[n], copyarr[n];
    printf("enter array element :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //copy one array into another array
    for(i=0;i<n;i++)
    {
        copyarr[i]=arr[i];
    }
     printf("original array element are  :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\ncopy array element are  :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", copyarr[i]);
    }
}