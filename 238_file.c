//rewind() := its set pointer location at the beigning of file.
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[50];
    ptr = fopen("factorial.txt", "r");
    while (fgets(ch, 50, ptr) != NULL)
    {
        printf("%s ", ch);
    }
    rewind(ptr);
    while (fgets(ch, 50, ptr) != NULL)
    {
        printf("%s ", ch);
    }
    fclose(ptr);
}