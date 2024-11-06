// wap to take array element from user and print only positive element.
#include <stdio.h>
void printpos(int a[], int s)
{
    int i;
    printf("\nonly positive element : ");
    for (i = 0; i < s; i++) // 3
    {
        if (a[i] > 0)
        {
            printf("%d ", a[i]); // 12 6
        }
    }
}
void printneg(int a[], int s)
{
    int i;
    printf("\nonly nagative element : ");
    for (i = 0; i < s; i++) // 3
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]); // 12 6
        }
    }
}
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
    printpos(arr, n);
    printneg(arr, n);
}