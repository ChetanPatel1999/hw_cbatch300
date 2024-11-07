// wap to find max element in array.
#include <stdio.h>
int maxelement(int arr[], int n)
{
    int max = arr[0], i;    // 12
    for (i = 0; i < n; i++) // 6
    {
        if (max < arr[i])
        {
            max = arr[i]; // 67
        }
    }
    return max;
}
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
    int res = maxelement(arr, n);
    printf("\nmax element : %d ",res);
}