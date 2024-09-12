// variable type local and global
#include<stdio.h>
int g=90;
void fun()
{
    int b=78,g=45;//local variable
   	printf("b = %d\n",b);
   	printf("g = %d\n",g);
}
void main()
{
   int a=12;//local variable 
   printf("a = %d\n",a);
   printf("g = %d\n",g);
   fun();
}


