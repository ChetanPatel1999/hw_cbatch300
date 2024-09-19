#include <stdio.h>
void main()
{
    int a, b;
    a = 12;
    b = 5;
    // a += b; // a=a+b;
    // b-=a;
    a %= b;

    printf("a= %d\n", a); // 2
    printf("b= %d\n", b); // 5
}