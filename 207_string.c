// built_in fuction of string
//  strcmp() // its compare two string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[20], ch2[20];
    printf("enter  frist string : ");
    gets(ch1);
    printf("enter  second string : ");
    gets(ch2);
    if(strcmp(ch1,ch2)==0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
   
}