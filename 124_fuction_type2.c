// fuction with no return type,but with argument
#include <stdio.h>
void add(int,int);
void cube(int);
void range(int,int);
void main()
{
    add(12, 8);
    int x, y;
    x = 10;
    y = 9;
    add(x, y);
    cube(3);
    int i;
    range(5, 10);
    range(1,5);
}
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum = %d\n", c);
}
void cube(int num)
{
    int cube;
    cube = num * num * num;
    printf("cube of %d = %d\n", num, cube);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++)
    {
        cube(i);
    }
}