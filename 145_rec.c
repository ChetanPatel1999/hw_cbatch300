//wap to print factorial using recursion.
#include<stdio.h>
int factorial_no_recursion(int num)//5
{
  int fact=1;//1
  while(num)//0
  {
    fact=fact*num;//120
    num--;//0
  }
  return fact;
}
int factorial(int num)//1
{
  static int fact=1;
  fact=fact*num;//120
  num--;//0
  if(num)
  {
    factorial(num);
  }
  return fact;
}
void main()
{
   printf("factorial = %d\n",factorial(3));
   printf("factorial = %d\n",factorial(3));

}