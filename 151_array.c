// we can change array element .
#include <stdio.h>
void main()
{
    int a[] = {12, 34, 56, 78, 90};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    a[2] = 500;
    a[4] = 400;
    printf("\narray element after change are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}