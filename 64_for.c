#include <stdio.h>
void main()
{
    int i, s, e;
    printf("enter starting range : ");
    scanf("%d", &s);//12
    printf("enter ending range : ");
    scanf("%d", &e);//7
    if (e > s)
    {
        for (i = s; i <= e; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = s; i >= e; i--)
        {
            printf("%d ", i);
        }
    }
}