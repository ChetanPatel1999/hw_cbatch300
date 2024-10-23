// wap to check given number is nagative/postive/Zero.
#include <stdio.h>
int negpos(int num)
{
    if (num > 0)
        return 1;
    else if (num == 0)
        return 0;
    else
        return -1;
}
void main()
{
    int n = -34;
    int res = negpos(n);
    if (res==1)
    {
        printf("postive number ");
    }
    else if (res == -1)
    {
        printf("nagative number ");
    }
    else
    {
        printf("zero number");
    }
}