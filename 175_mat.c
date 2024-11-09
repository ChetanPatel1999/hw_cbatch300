// wap to take two matrix from user and dipaly their sum.
#include <stdio.h>
void display(int r, int c, int mat[r][c])
{
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void input(int r, int c, int mat[r][c])
{
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
}
void matrixsum(int r,int c, int mat1[r][c],int mat2[r][c],int summat[r][c])
{
    int i,j;
    // code for sum two matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            summat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void main()
{
    int r, c;
    printf("enter matrix row : ");
    scanf("%d", &r);
    printf("enter matrix coloum : ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], summat[r][c];
    int i, j;
    input(r, c, mat1);
    input(r, c, mat2);
    display(r, c, mat1);
    display(r, c, mat2);
    matrixsum(r, c, mat1, mat2,summat);
    display(r, c, summat);
}