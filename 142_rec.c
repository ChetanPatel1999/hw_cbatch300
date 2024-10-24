// wap to print  nuber 1 to 10 using recursion.
#include <stdio.h>
void printnum(int num)
{
    static int i=1; 
    printf("%d ",i);
    i++;
    if (i <=num)
    {
        printnum(num);
    }
}
void main()
{
    printnum(20);
}
