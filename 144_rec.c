// wap to print  reverse number using recursion.
#include <stdio.h>
void printnum(int num)
{
    num--;//17
    if (num)
    {
        printnum(num);
    }
    printf("%d ",num);
}
void main()
{
    printnum(5);
}
