// continue stmnt
//wap to print odd numbers using continue stmnt.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) //2
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d ", i); //1 
    }
    printf("\nafter for loop");
}