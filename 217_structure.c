// structure example
#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    struct pen p1, p2 , p3;
    printf("enter pen info : \n");
    printf("enter pen name : ");
    scanf("%s",p1.name);
    printf("enter pen price : ");
    scanf("%d",&p1.price);
    printf("enter pen rating : ");
    scanf("%f",&p1.rating);

    printf("enter pen info : \n");
    printf("enter pen name : ");
    scanf("%s",p2.name);
    printf("enter pen price : ");
    scanf("%d",&p2.price);
    printf("enter pen rating : ");
    scanf("%f",&p2.rating);

    printf("pen1 info : \n");
    printf("pen name : %s\n",p1.name);
    printf("pen price : %d\n",p1.price);
    printf("pen rating : %.1f\n",p1.rating);

    printf("pen2 info : \n");
    printf("pen name : %s\n",p2.name);
    printf("pen price : %d\n",p2.price);
    printf("pen rating : %.1f\n",p2.rating);
}