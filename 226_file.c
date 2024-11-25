// fprintf :- write data inside file
// "w" mode :- open file in write mode and delete privious data of file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("abc.txt", "w");
    fprintf(ptr,"hi i am good boy\n");
    fprintf(ptr,"and whtas about you?\n");
    fclose(ptr);
}