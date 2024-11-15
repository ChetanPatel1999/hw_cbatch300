// wap to print only vovel char of string.
#include <stdio.h>
void main()
{
    char name[] = "chetan patel";
    int i,c=0;
    printf("givan string : %s\n",name);
    printf("only vovel char : ");
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            printf("%c ", name[i]);
            c++;
        }
    }
    printf("\ntotal vovle count : %d",c);
}