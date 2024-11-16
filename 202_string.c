//built_in fuction of string
// strupr() // its convert string in upper case
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[20];
 printf("enter  a string : ");
 gets(ch);
 printf("string : %s\n",ch);
 strupr(ch);
 printf("upper string : %s\n",ch);
}