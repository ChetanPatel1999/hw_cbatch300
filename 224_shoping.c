#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct reg
{
    char name[20];
    char pass[20];
};
struct stn
{
    char name[20];
    int price;
};
struct crt
{
    char name[20];
    int price;
};
void shoping();
void registration(struct reg r[], int index)
{
    printf("welcome to registration page ....\n");
    printf("enter your name : ");
    scanf("%s", r[index].name);
    printf("enter password : ");
    scanf("%s", r[index].pass);
    printf("\nregistration succefully \n\n");
}
void login(struct reg r[], int index)
{
    if (index > 0)
    {
        char p[20], s[20], i, f = 0;
        printf("welcome to log in page ....\n");
        printf("enter your name : ");
        scanf("%s", s);
        printf("enter password : ");
        scanf("%s", p);
        for (i = 0; i < index; i++)
        {
            if (strcmp(s, r[i].name) == 0)
            {
                f = 1;
                if (strcmp(p, r[i].pass) == 0)
                {
                    printf("\nlog in succesfully\n\n");
                    shoping();
                }
                else
                {
                    printf("\nyour password is wrong\n\n");
                }
            }
            if (f == 0)
            {
                printf("\nplease frist create your rigitration\n\n");
            }
        }
    }
    else
    {
        printf("\nfrist registration than log-in\n\n");
    }
}
void display_store(struct crt c[], struct stn st[], int *it_in_cr)
{
    int i;
    char item[20];
    printf("\nstore items ....... \n");
    printf("item      price\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s     %d\n", st[i].name, st[i].price);
    }
    printf("\nadd item in cart : ");
    scanf("%s", item);
    int f = 0;
    for (i = 0; i < 5; i++)
    {
        if (strcmp(st[i].name, item) == 0)
        {
            strcpy(c[(*it_in_cr)].name, st[i].name);
            c[(*it_in_cr)].price = st[i].price;
            (*it_in_cr)++;
            printf("\nitem is add in cart\n\n");
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("\nitem is not add in cart\n\n");
    }
}
void display_cart(struct crt c[], int *it_in_cr)
{
    int i;
    printf("\ncart items ....... \n");
    printf("item      price\n");
    for (i = 0; i < (*it_in_cr); i++)
    {
        printf("%s        %d\n", c[i].name, c[i].price);
    }
    printf("\n");
}
void bill(struct crt c[], int *it_in_cr)
{
    int i, total = 0;
    printf("\ncart items ....... \n");
    printf("item      price\n");
    for (i = 0; i < (*it_in_cr); i++)
    {
        printf("%s        %d\n", c[i].name, c[i].price);
        total = total + c[i].price;
    }
    printf("________________________________________\n");
    printf("Total Bill : %d\n\n", total);
}
void setstore(char s[], int price, struct stn st[], int index)
{
    strcpy(st[index].name, s);
    st[index].price = price;
}
void shoping()
{
    struct stn s[5];
    setstore("pen", 10, s, 0);
    setstore("pencil", 5, s, 1);
    setstore("colors", 20, s, 2);
    setstore("register", 50, s, 3);
    setstore("paint", 7, s, 4);
    int it_in_cr = 0, num;
    struct crt c[10];
    while (1)
    {
        printf("......shoping store.......\n");
        printf("press 1 for dipslay store item \n");
        printf("press 2 for dipslay cart item\n");
        printf("press 3 for generate bill \n");
        printf("press 4 for exit \n");
        printf("choose opeation : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            display_store(c, s, &it_in_cr);
            break;
        case 2:
            display_cart(c, &it_in_cr);
            break;
        case 3:
            bill(c, &it_in_cr);
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("choose correct option");
            break;
        }
    }
}
void main()
{
    int index = 0, num;
    struct reg r[10];
    while (1)
    {
        printf("......shoping store.......\n");
        printf("press 1 for registration \n");
        printf("press 2 for log-in\n");
        printf("press 3 for exit\n");
        printf("choose opeation : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            registration(r, index);
            index++;
            break;
        case 2:
            login(r, index);
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("choose correct option");
            break;
        }
    }
}