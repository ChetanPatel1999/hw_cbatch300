// array of structure example
#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12]; // data member
    int price;
    float rating;
};
int count_pen_upto5(struct pen p[], int size)
{
    int c = 0, i;
    printf("pen name which price above then 5 :\n");
    for (i = 0; i < size; i++)
    {
       if(p[i].price>5)
       {
        printf("%s\n",p[i].name);
        c++;
       }
    }
    return c;
}
void main()
{
    struct pen p[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("enter pen%d info : \n", i + 1);
        printf("enter pen name : ");
        scanf("%s", p[i].name);
        printf("enter pen price : ");
        scanf("%d", &p[i].price);
        printf("enter pen rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 3; i++)
    {
        printf("pen%d info : \n", i + 1);
        printf("pen name : %s\n", p[i].name);
        printf("pen price : %d\n", p[i].price);
        printf("pen rating : %.1f\n", p[i].rating);
    }
    int res=count_pen_upto5(p,3);
    printf("total pen : %d",res);
}