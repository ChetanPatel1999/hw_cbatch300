// dyanamic memory allocataion using malloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, *ptr, *temp,n;
    printf("enter dyanamically array size :");
    scanf("%d",&n);//5
    ptr =(int*)malloc(n*sizeof(int));
    temp = ptr;
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = temp;
    printf("display array element ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr); // 12 34 56 78 90
        ptr++;
    }
    ptr = temp;
    free(ptr);
}