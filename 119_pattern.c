// nested for loop
#include <stdio.h>
void main()
{
    int i, j, s, k;
    for (i = 1; i <= 5; i++) // 2
    {
        for (j = 5; j >= i; j--)
        {
            printf("* ", i);
        }
        for (s = 1; s < (i * 2) - 1; s++)
        {
            printf("  ");
        }
        for (k = 5; k >= i; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
}