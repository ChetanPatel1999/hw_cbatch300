#include<stdio.h>
enum day{mon=8,tue,wed='a',thu=0,fri,sat,sun};
void main()
{
 printf("mon value : %d\n",mon);
 printf("tue value : %d\n",tue);
 printf("wed value : %d\n",wed);
 printf("thu value : %d\n",thu);
 printf("fri value : %d\n",fri);
 printf("sat value : %d\n",sat);
 printf("sun value : %d\n",sun);
}