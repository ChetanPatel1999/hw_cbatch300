// nested for loop
#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 10; i++) // 4
    {
        for (j = 1; j <= 10; j++)
        {
            if(i==1 || i==10 || j==1 || j==10)
            {
                printf("*  ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
}