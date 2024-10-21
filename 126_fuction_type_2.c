#include<stdio.h>
void add(float a, float b)
{
    float c;
    c = a + b;
    printf("sum = %.2f\n", c);
}
void upercase(char ch)
{
    ch=ch-32;
    printf("uper char : %c\n",ch);
}
void main()
{
 add(12.56,7.79);
 upercase('a');
 upercase('b');
}