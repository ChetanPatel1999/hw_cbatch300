// wap to find max element in array.
#include <stdio.h>
void main()
{
    int n, i;
    printf("entera array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array element :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array element are  :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // code for find max element
    //  12 4 55 67 8 9 
    int max=arr[0];//12
    for(i=0;i<n;i++)//6
    {
        if(max<arr[i])
        {
            max=arr[i];//67
        }
    }
    printf("\nmax element : %d",max);
}