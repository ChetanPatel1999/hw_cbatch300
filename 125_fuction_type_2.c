//no retuen type but with argument
#include<stdio.h>
void factorial(int num)//5
{
 int fact=1,i;
 for(i=1;i<=num;i++)
 {
    fact=fact*i;//120
 }
 printf("factorial of %d = %d\n",num,fact);

}
void factinput()
{
    int num;
    printf("enter a num : ");
    scanf("%d",&num);
    factorial(num);
}
void main()
{
 factinput();
 factorial(6);
}