// wap to print  nuber 1 to 10 using recursion.
#include <stdio.h>
void num1_10()
{
    static int i=1; 
    printf("%d ",i);
    i++;
    if (i <=10)
    {
        num1_10();
    }
}
void main()
{
    num1_10();
}
