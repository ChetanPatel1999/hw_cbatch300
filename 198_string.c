// take string from user
#include <stdio.h>
void main()
{
    char name[30];
    printf("enter a string : ");
    scanf("%[^\n]s", name);
    printf("string : %s", name);
}