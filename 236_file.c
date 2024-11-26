// fputs() //write string in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[50]="variable content";
    ptr=fopen("abc.txt","w");
    fputs("hi i am a boy\n",ptr);
    fputs(ch,ptr);
    fclose(ptr);
}