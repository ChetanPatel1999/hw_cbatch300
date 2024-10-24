// wap to print  a msg 5 time s using recursion.
#include <stdio.h>
int i = 1;
void main()
{
    printf("hi student\n"); // 4
    if (i < 5)
    {
        i++;
        main();
    }
}
