//built_in fuction of string
// strlen("hi"); its return length
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[20];
 printf("enter  a string : ");
 gets(ch);
 int l=strlen(ch);
 printf("string length : %d\n",l);
 int i;
 for(i=0 ;i<strlen(ch);i++)
 {
 printf("%c ",ch[i]);
 }
}