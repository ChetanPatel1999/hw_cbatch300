// fopen :- open or create a file
// fclose :- close a file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("abc.txt", "w");
    fclose(ptr);
}