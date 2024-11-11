//we can change variable value by using pointer.
#include<stdio.h>
void main()
{
 int a=12;
 int *ptr=&a;
 printf("value of a : %d\n",a);
 *ptr=90;
 printf("valuen of a : %d",a);

}