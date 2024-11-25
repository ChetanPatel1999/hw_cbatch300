// fprintf :- write data inside file
// "a" mode :- open file in write mode and append data in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[50]="using varaible also insert data\n";
    ptr = fopen("abc.txt", "a");
    fprintf(ptr,"hi i am good boy\n");
    fprintf(ptr,"and whtas about you?\n");
    fprintf(ptr,ch);
    fclose(ptr);
}