// wap to check given number is positive or nagative.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // -67 
    switch(num>0)
    {
      case 0:printf("number is nagative");break;
      case 1:printf("number is positive");break;  
    }
}