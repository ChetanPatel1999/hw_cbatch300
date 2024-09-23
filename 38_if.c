#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 2
    if (num == 1)
    {
        printf("GOOD MORNING");
    }
    if (num == 2)
    {
        printf("GOOD AFTER NOON");
    }
    if (num == 3)
    {
        printf("GOOD EVENING");
    }
    if (num == 4)
    {
        printf("GOOD NIGHT");
    }
    if (num>4)
    {
        printf("please enter 1 2 3 4");
    }
}