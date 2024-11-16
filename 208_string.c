// wap to print string length.
#include <stdio.h>
int length(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}
void upper(char str[]) // chetan
{
    int i;
    for (i = 0; i < length(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}
void copy(char ch1[], char ch2[])
{
    int i;
    if (length(ch1) == length(ch2))
    {
        for (i = 0; i < length(ch1); i++)
        {
            ch1[i] = ch2[i];
        }
    }
    else{
        printf("length are different");
    }
}
void reverse(char str[]) // chetan
{
    int i, j = 0;
    char st[length(str)];
    for (i = length(str) - 1; i >= 0; i--)
    {
        st[j] = str[i];
        j++;
    }
    st[j]='\0';
    copy(str, st);
}
void main()
{
    char ch[20];
    printf("enter  a string : ");
    gets(ch);
    reverse(ch);
    printf("string : %s\n", ch);
}