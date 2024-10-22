// fuction with return type with argument
#include<stdio.h>
int cube(int num)
{
    int cube;
    cube=num*num*num;
    return cube;
}
int factorial(int num)//5
{
 int fact=1,i;
 for(i=1;i<=num;i++)
 {
    fact=fact*i;//120
 }
 return fact;
}
void main()
{
 int cb=cube(5);
 printf("cube of 5 = %d\n",cb);
 printf("cube = %d\n",cube(2));

 int f=factorial(5);
 printf("factorial = %d\n",f);
}