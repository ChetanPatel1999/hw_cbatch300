//write a program to take two number from user and display their sum.
#include<stdio.h>
void main()
{
 float num1,num2,sum;	
 printf("addition programm : \n");
 printf("________________________________\n");
 printf("enter frist num : ");
 scanf("%f",&num1);
 printf("enter second num : ");
 scanf("%f",&num2);
 printf("num1 = %.2f\n",num1);
 printf("num2 = %.2f\n",num2);
 sum=num1+num2;
 printf("sum of %.2f and %.2f= %.2f",num1,num2,sum); 
} 
