// wap to count frequency of each charcter of string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100],c;
    int i,j;
    printf("enter a string : ");
    gets(str); // ah#e#llao baro
    for (i = 0; i <= 255; i++)//97
    {
        c=0;
        for (j = 0; j < strlen(str); j++)
        {
          if(str[j]==i)
          {
            c++;
          }
        }
        if(c!=0 && i!= ' ')
        {
          printf("%c is appear %d times\n",i,c);
        }
    }
}