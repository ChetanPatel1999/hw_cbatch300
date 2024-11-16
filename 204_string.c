//built_in fuction of string
// strrev() // its reverse string
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[20];
 printf("enter  a string : ");
 gets(ch);
 printf("string : %s\n",ch);
 strrev(ch);
 printf("lower string : %s\n",ch);
}