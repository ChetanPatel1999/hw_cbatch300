// nested for loop
#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++) // 4
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 2 || i == 4 || i == 5 || j == 1 || j==2)
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}