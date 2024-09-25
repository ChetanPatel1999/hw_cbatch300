// wap to check given alphabet is vovel or consonent.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a alphabet : ");
    scanf("%c", & ch);//p
    if (ch == 'a' ||ch == 'e'|| ch == 'i' ||ch == 'o'|| ch == 'u'|| ch=='A')
    {
        printf("alphabet is vovel");
    }
    else
    {
        printf("alphabet is consonent");
    }
}