//wap to print sum 1 to 10;
#include<stdio.h>
int sumnumber(int num)//10
{
  if(num==1)
  {
    return 1;
  }
   return num + sumnumber(num-1);
}
void main()
{
printf("sum = %d",sumnumber(11));
}