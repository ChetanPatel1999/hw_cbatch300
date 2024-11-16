// built_in fuction of string
//  strcat() // its combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[20], ch2[20];
    printf("enter  name : ");
    gets(ch1);
    printf("enter  sirname : ");
    gets(ch2);
    printf("string1 : %s\n", ch1);
    printf("string2 : %s\n", ch2);
    strcat(ch1," ");
    strcat(ch1,ch2);
    printf("canditate name  : %s\n", ch1);
}