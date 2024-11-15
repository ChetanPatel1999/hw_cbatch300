// increase dyanamically memorry by realloc fuction.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, *ptr, *temp, n, n1;
    printf("enter dyanamically array size :");
    scanf("%d", &n); // 5
    ptr = (int *)malloc(n * sizeof(int));
    temp = ptr; // 400
    printf("array address : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    printf("\nenter increase array size : ");
    scanf("%d", &n1); // 3
    ptr = realloc(ptr, (n + n1) * sizeof(int));
    printf("increase array address : ");
    for (i = 0; i < (n + n1); i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    free(ptr);
}