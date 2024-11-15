// iterate string character using null charcter.
#include <stdio.h>
void main()
{
    char name[]="chetan patel";
    int i;
    for(i=0; name[i]!='\0' ;i++)//6
    {
        printf("%c ",name[i]);
    }
}