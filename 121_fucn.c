// fuction in c language
#include <stdio.h>
void add() // defination
{
    int a, b, c;
    printf("enter two values : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void sub() // defination
{
    int a, b, c;
    printf("enter two values : ");
    scanf("%d%d", &a, &b);
    c = a - b;
    printf("sum = %d\n", c);
}
void main()
{
   int i;
   for(i=0;i<3;i++)//
   {
    add();
   }
   sub();
}
