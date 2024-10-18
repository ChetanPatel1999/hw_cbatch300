// fuction in c language
#include <stdio.h>
void add();//declaration
void main()
{
    printf("main fuction start...\n");
    add(); // calling
    printf("end main fuction ... \n");
    add(); //calling
}
void add() // defination
{
    int a, b, c;
    printf("enter two values : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
