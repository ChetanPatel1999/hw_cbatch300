// wap to take array element from user display them and display sum of all element.
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

    //sum of all elemet 
    // 12 5 6 3 2
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];//28
    }
    printf("\nsum of all elemet = %d",sum);
}