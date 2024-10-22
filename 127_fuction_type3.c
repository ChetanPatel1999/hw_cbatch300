// fuction with return type with argument
#include <stdio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res = add(12, 45);
    printf("sum =%d\n", res);

    printf("sum = %d\n",add(12,5));
}