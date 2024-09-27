// wap to enter frist later of frinds name and display complete name.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter frist later of name : ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'm': printf("mohan");break;
        case 'n': printf("naman");break;
        case 'p': printf("pyush");break;
        case 'r': printf("raghav");break;
        case 'y': printf("yash");break;
        default : printf("you have no friend which name start witch %c ",ch);
    }
}