#include<stdio.h>
#include<stdlib.h>
void main()
{
 int *ptr;
 ptr=(int*)malloc(sizeof(int));
 printf("enter a value : ");
 scanf("%d",ptr);
 printf("value of : %d\n",*ptr);
 *ptr=90;
 printf("value of : %d\n",*ptr);
}