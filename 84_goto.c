
#include <stdio.h>
void main()
{
    int i=1;
    printf("hi students\n");
    i++; // 2
    if (i <= 5)
    {
        goto lable;
    }
    printf("after goto1 ");
    printf("after goto2 ");
    lable:
    printf("end stmnt");

}