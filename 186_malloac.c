// dyanamic memory allocataion using malloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, *ptr,n;
    printf("enter dyanamically array size :");
    scanf("%d",&n);
    ptr =(int*)malloc(n*sizeof(int));
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("display array element ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]); // 12 34 56 78 90
    }
    free(ptr);
}