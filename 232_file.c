// read a file
// fscanf () // to read a file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[30];
    ptr = fopen("factorial.txt", "r");
    while (fscanf(ptr, "%s", ch) != EOF)
    {
        printf("%s ", ch);
    }
    fclose(ptr);
}