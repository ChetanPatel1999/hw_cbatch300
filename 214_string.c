// wap to check two string is anagram or not.
#include <stdio.h>
#include <string.h>
int isanagram(char str1[], char str2[])
{
    int c1, c2, i, j;
    if (strlen(str1) == strlen(str2))
    {
        for (i = 0; i <= 255; i++) // 97
        {
            c1 = 0;
            c2 = 0;
            for (j = 0; j < strlen(str1); j++)
            {
                if (str1[j] == i)
                {
                    c1++;
                }
            }
            for (j = 0; j < strlen(str2); j++)
            {
                if (str2[j] == i)
                {
                    c2++;
                }
            }
            if (c1 != c2)
            {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
void main()
{
    char str1[100], str2[100];
    printf("enter frist string : ");
    gets(str1);
    printf("enter second string : ");
    gets(str2);
    if (isanagram(str1, str2))
    {
        printf("strings are anagram");
    }
    else
    {
        printf("strings are not anagram");
    }
}