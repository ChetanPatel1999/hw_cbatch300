// file creat in other folder of computer , using folder path
#include <stdio.h>
void main()
{
    int num, i, fact = 1;
    FILE *pf;
    pf=fopen("C:\\Users\\WIN\\Documents\\chetan patel\\factorial.txt","a");
    printf("enter a num :");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d", num, fact);
    fprintf(pf,"factorial of %d = %d\n", num, fact);
    fclose(pf);
}