#include <stdio.h>
void main()
{
    int i = 0;
    while (i < 10)
    {
        i++;
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }
}