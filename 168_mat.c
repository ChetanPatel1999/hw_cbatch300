// wap to take matrix element from user and display them.
#include <stdio.h>
void main()
{
    int mat[3][3];
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter element pos[%d][%d] : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("matrix element are : \n");
      for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}