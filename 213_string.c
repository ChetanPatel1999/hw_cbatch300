// wap to count word in given string
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], i, c = 0,f=0;
    printf("enter a string : ");
    gets(str);
    //     i am    boy    
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
        {
            f = 1;
        }
        if (f==1 && str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' )
        {
            c++; // 1
        }
    }
    printf("total word in string : %d", c + 1);
}