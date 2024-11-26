// read a file
// fgetc() // read a single character
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("factorial.txt", "r");
    ch = fgetc(ptr);
    printf("%c", ch);
    ch = fgetc(ptr);
    printf("%c", ch);
    fclose(ptr);
}