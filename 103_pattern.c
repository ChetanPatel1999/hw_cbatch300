// nested for loop
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 69; i >= 65; i--)//2
    {
        for (j = i; j >= 65; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}