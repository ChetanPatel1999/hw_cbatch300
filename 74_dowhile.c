//continue calculater by do while loop
#include <stdio.h>
void main()
{
    int num, a, b, c;
    printf("welcome to my calculater ....\n");
    do
    {
        printf("press 1 for add : \n");
        printf("press 2 for sub : \n");
        printf("press 3 for mul : \n");
        printf("press 4 for div : \n");
        printf("press 5 for exit : \n");
        printf("press number  : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("enter two numbers :");
            scanf("%d%d", &a, &b);
            c = a + b;
            printf("%d + %d = %d\n", a, b, c);
            break;
        case 2:
            printf("enter two numbers :");
            scanf("%d%d", &a, &b);
            c = a - b;
            printf("%d - %d = %d\n", a, b, c);
            break;
        case 3:
            printf("enter two numbers :");
            scanf("%d%d", &a, &b);
            c = a * b;
            printf("%d * %d = %d\n", a, b, c);
            break;
        case 4:
            printf("enter two numbers :");
            scanf("%d%d", &a, &b);
            c = a / b;
            printf("%d / %d = %d\n", a, b, c);
            break;
        case 5:
            break;
        default:
            printf("plese enter 1 to 5 numbers .... \n");
        }

    } while (num != 5);
}