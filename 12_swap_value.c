//wap to swap two values whithout using third variable.
#include<stdio.h>
void main()
{
	int a=12,b=5;
	printf("before swapping value\n");
	printf("a = %d\n",a); //12
	printf("b = %d\n",b); //5
    a=a+b; //17
    b=a-b;  //12
    a=a-b;  //5
	printf("after swapping value\n");
	printf("a = %d\n",a); //
	printf("b = %d\n",b); //
}
