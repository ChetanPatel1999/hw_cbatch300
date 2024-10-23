// wap to check voter is eleigible for casting vote or note.
#include <stdio.h>
void main()
{
    int age;
    printf("enter youre age : ");
    scanf("%d", &age); // 3
    if (age >= 18)
    printf("you are eligible for casting vote"); 
    else 
    printf("you are not eligible for casting vote");
    
}