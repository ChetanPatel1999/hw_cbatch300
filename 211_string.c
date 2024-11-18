//wap to check given string is plindrom or not.
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[40],ch1[40];
 printf("enter a string : ");
 gets(ch);
 strcpy(ch1,ch);
 strrev(ch);
 if(strcmp(ch,ch1)==0)
 {
    printf("plindrom");
 }
 else{
    printf("not plindrom");
 }
}