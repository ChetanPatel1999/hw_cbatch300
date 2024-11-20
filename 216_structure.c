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
    struct pen p1, p2={"goldex",10,4.5}, p3;
    printf("size of pen type variable : %d\n",sizeof(p1));
    strcpy(p1.name, "cello");
    p1.price = 5;
    p1.rating = 3.5;

    printf("pen1 info : \n");
    printf("pen name : %s\n",p1.name);
    printf("pen price : %d\n",p1.price);
    printf("pen rating : %.1f\n",p1.rating);

    printf("pen2 info : \n");
    printf("pen name : %s\n",p2.name);
    printf("pen price : %d\n",p2.price);
    printf("pen rating : %.1f\n",p2.rating);
}