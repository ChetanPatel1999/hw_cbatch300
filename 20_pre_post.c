//pre - post increament 
#include<stdio.h>
void main()
{
 int a=12,b;
 //b=++a;// pre increament :- first increase a value by one than assign in b
 b=a++; //post increament :- frist assign a value in b after than increase a value by one
 printf("a= %d\nb = %d",a,b);
 
 
 
}
