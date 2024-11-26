// read a file
// fgetc() // read a single character
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("234_file.c", "r");
    while (1)
    {
        ch = fgetc(ptr);
        if(ch==EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);
}