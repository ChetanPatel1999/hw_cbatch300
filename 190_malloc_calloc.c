#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr1, *ptr2, i;
    ptr1 = (int *)malloc(5 * sizeof(int));
    ptr2 = (int *)calloc(5, sizeof(int));
    printf("malloc values : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", *ptr1);
        ptr1++;
    }
    printf("\ncalloc values : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", *ptr2);
        ptr2++;
    }
}