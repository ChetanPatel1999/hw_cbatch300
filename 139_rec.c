// wap to print  a msg 5 time s using recursion.
#include <stdio.h>
void fun()
{
    static int i=1; // its run in programm only once time
    printf("hi students\n");
    i++;
    if (i <=5)
    {
        fun();
    }
}
void main()
{
    fun();
}
