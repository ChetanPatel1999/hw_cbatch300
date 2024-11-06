// wap to take array element from user and print only positive element.
#include <stdio.h>
void main()
{
    int n, i;
    printf("enter array size : ");
    scanf("%d", &n); // 10
    int arr[n];
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // code for only positive element
    // 12 -5 6 -9 8
    printf("\nonly positive element : ");
    for (i = 0; i < n; i++) // 3
    {
        if (arr[i] > 0)
        {
            printf("%d ", arr[i]); // 12 6
        }
    }
    printf("\nonly nagative element : ");
    for (i = 0; i < n; i++) // 3
    {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]); // 12 6
        }
    }
}