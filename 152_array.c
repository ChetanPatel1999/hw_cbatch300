// wap to take array element from user display them.
#include <stdio.h>
void main()
{
    int arr[10], i;
    printf("enter array element : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array element are : \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}