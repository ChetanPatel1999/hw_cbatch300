//built_in fuction of string
// strlwr() // its convert string in lower case
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[20];
 printf("enter  a string : ");
 gets(ch);
 printf("string : %s\n",ch);
 strlwr(ch);
 printf("lower string : %s\n",ch);
}