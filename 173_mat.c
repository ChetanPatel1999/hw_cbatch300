// wap to display right digonal of matrix and sum of left digonal.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter matrix row : ");
    scanf("%d", &r);
    printf("enter matrix coloum : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter element pos[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("matrix element are : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    if (r == c)
    {
        int sum = 0;
        printf("right digonal element : \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (i + j==r-1)
                {
                    printf("%d ", mat[i][j]);
                    sum = sum + mat[i][i];
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }
        printf("sum of right digonal element : %d ", sum);
    }
    else
    {
        printf("matrix is not square matrix");
    }
}