// when we increase pointer type varaible by 1 so its
//  value increasa by 4 if pointer is integer type.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("value of a by ptr : %d\n", *ptr);
    printf("address of a : %d\n", &a);
    printf("value of  ptr : %d\n", ptr);
    ptr++; // ptr=ptr+1;
    printf("address of a : %d\n", &a);
    printf("value of ptr : %d\n", ptr);
    // programm crash printf("derefernce of ptr : %d\n", *ptr);
}