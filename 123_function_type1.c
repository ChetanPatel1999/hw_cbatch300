//fuction with no return type, no argument
#include<stdio.h>
void add() 
{
    int a, b, c;
    printf("enter two values : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void cube()
{
    int num,cube;
    printf("enter a num : ");
    scanf("%d",&num);
    cube=num*num*num;
    printf("cube of %d = %d\n",num,cube);
}
void main()
{
 cube();
}