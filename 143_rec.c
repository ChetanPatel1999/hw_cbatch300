// wap to print  reverse number using recursion.
#include <stdio.h>
void printnum(int num)
{
    printf("%d ",num);
    num--;//17
    if (num)
    {
        printnum(num);
    }
}
void main()
{
    printnum(50);
}
