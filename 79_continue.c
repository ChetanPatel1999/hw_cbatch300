// continue stmnt
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 6
    {
        continue;
        printf("%d ", i); // 1 2 3 4 6 7 8 9 10
    }
    printf("after for loop");
}