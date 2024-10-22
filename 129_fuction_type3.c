#include<stdio.h>
float add(float a, float b)
{
    float c;
    c = a + b;
    return c;
}
char upercase(char ch)
{
    ch=ch-32;
    return ch;
}
void main()
{
 printf("sum = %.2f \n",add(12.56,7.79));
 printf("uper case = %c", upercase('a'));
}