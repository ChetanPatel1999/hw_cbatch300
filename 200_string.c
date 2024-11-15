// take string from user
//fgets() // take string from user
//fputs ()// display string on consol/output screen
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter a string : ");
    fgets(name,50,stdin);
    fputs(name,stdout);
}