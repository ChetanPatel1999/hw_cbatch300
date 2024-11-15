// wap to print only digit char and count digit char.
#include <stdio.h>
void main()
{
    char name[] = "12cheta8085patel";
    int i, c = 0;
    printf("givan string : %s\n", name);
    printf("only digit char : ");
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] >= '0' && name[i] <= '9')
        {
            printf("%c ", name[i]);
            c++;
        }
    }
    printf("\ntotal digit count : %d", c);
}