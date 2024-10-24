// wap to print  a msg 5 time s using recursion.
#include <stdio.h>
int i = 1;
void fun()
{
    printf("hi students\n");
    i++;
    if (i < 5)
    {
        fun();
    }
}
void main()
{
    fun();
}
