#include <stdio.h>
void fun(int arr[])
{
    printf("element : %d %d\n", &arr[0], &arr[1]);
    arr[0] = 56;
    arr[1] = 90;
}
void main()
{
    int a[] = {12, 34};
    printf("element : %d %d\n", &a[0], &a[1]);
    fun(a);
    printf("element : %d %d\n", a[0], a[1]);
}