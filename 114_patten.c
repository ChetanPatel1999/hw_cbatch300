// nested for loop
#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++) // 4
    {
        for (j = 1; j < (i * 2); j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}