// nested for loop
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//2
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}