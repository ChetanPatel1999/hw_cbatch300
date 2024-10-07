// hotel entry and show menu card and bill generat.
#include <stdio.h>
void main()
{
    int age, num,sum=0;
    printf("enter your age :");
    scanf("%d", &age); // 34
    if (age >= 18)
    {
        printf("welcome my clube...\n");
        do
        {
            printf("1. pasta = 120\n");
            printf("2. noodles = 100\n");
            printf("3. sandwitch = 150\n");
            printf("please press number for order : ");
            scanf("%d", &num); //
            switch (num)
            {
            case 1:
                printf("your pasta is ordered \n");
                sum+=120;
                break;
            case 2:
                printf("your noodles is ordered \n");
                sum+=100;
                break;
            case 3:
                printf("your sandwitch  is ordered\n");
                sum+=150;
                break;
            default:
                printf("please enter 1 2 or 3\n");
            }
            printf("your totle bill : %d\n",sum);
            printf("you want to order more item so press 1 otherwise 0 : ");
            scanf("%d",&num);
        } while (num==1);
        printf("please pay total bill %d rs \n",sum);
        printf("please visit againn....");
    }
    else
    {
        printf("please try after %d year...", 18 - age);
    }
}
