// wap to take array element from user and print only positive element.
#include <stdio.h>
void display(int arr[], int size)
{
    int i;
    printf("array element are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void inputarray(int arr[], int size)
{
    int i;
    printf("enter array element : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void main()
{
    int n, i;
    printf("enter array size : ");
    scanf("%d", &n); // 10
    int arr[n];
    int arr2[n];
    inputarray(arr,n);
    inputarray(arr2,n);
    display(arr, n);
    display(arr2,n);
}