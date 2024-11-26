// fseek() := its set pointer at particuler position.
// ftell() := its retuen current position of pointer
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("234_file.c", "r");
    printf("position : %d\n", ftell(ptr));
    fseek(ptr, 15, SEEK_SET);
    printf("position : %d\n", ftell(ptr));
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    printf("position : %d\n ", ftell(ptr));
    fseek(ptr, 0, SEEK_SET);
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);
}