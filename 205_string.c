// built_in fuction of string
//  strcpy() // its copy string in another variable
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[20], ch2[20];
    printf("enter  a string : ");
    gets(ch1);
    printf("string1 : %s\n", ch1);
    printf("string2 : %s\n", ch2);
    //strcpy(ch2, ch1);
    strcpy(ch2,"mohit");
    printf("copy string2 : %s\n", ch2);
}