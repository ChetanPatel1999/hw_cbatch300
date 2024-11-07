// wap to  reverse array element in same  array.
// input array= [12,34,56,78,90]
// output array = [21,43,65,87,9]
#include <stdio.h>
void main()
{
    int n, i, rev, num, rem;
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
    // copy one array into another array
    // 12,348,56,8,9067
    for (i = 0; i < n; i++) // 1
    {
        rev = 0;
        num = arr[i];
        while (num > 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem; // 843
            num = num / 10;
        }
        arr[i] = rev;
    }
    printf("\nafter change array element are  :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}