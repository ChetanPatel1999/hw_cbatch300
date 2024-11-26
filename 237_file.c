// fgets() //read string in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[50];
    ptr=fopen("factorial.txt","r");
    fgets(ch,50,ptr);
    printf("%s ",ch);
    fclose(ptr);
}