// wap to check given string is plindrom or not.
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[40];
    printf("enter a string : ");
    gets(ch);                             // chetan
    int i = 0, j = strlen(ch) - 1, f = 0; // 4
    while (i < j)
    {
        if (ch[i] != ch[j])
        {
            f = 1;
            break;
        }
        i++;
        j--;
    }
    if (f == 1)
    {
        printf("not plindron");
    }
    else
    {
        printf(" plindron");
    }
}