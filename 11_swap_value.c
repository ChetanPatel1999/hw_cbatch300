//wap to swap two values using third variable.
#include<stdio.h>
void main()
{
	int a=12,b=5,c;
	printf("before swapping value\n");
	printf("a = %d\n",a); //12
	printf("b = %d\n",b); //5
    a=a*b;
    b=a/b;
    a=a/b;
	printf("after swapping value\n");
	printf("a = %d\n",a); //
	printf("b = %d\n",b); //
}
