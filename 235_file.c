// fputc() //write single charcter in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch='A';
    ptr=fopen("factorial.txt","w");
    fputc(ch,ptr);
    fputc('O',ptr);
    fclose(ptr);
}