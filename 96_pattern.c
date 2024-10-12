// nested for loop
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--)//2
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}