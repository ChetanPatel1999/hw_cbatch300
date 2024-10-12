// nested for loop
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <=5; i++)//4
    {
        for (j = 1; j <= 5; j++)//2
        {
            if(j<i)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}