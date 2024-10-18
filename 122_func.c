#include<stdio.h>
void fun2();
void fun3();
void fun1()
{
    fun2();
    printf("hi i am fun 1\n");
}
void fun2()
{
    printf("hi i am fun 2\n");
    fun3();

}
void fun3()
{
    printf("hi i am fun 3\n");
}
void main()
{
    printf("hi i am main\n");
    fun1();
}