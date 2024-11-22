//typedef example
#include<stdio.h>
typedef long long int lli;
typedef int i;
typedef double d;
struct student_of_10_class_government
{
 int rno;
 float per;
};
typedef struct student_of_10_class_government s10g;
void main()
{
 s10g s1;
 i a;
 lli b;
 d c;
 printf("size of int : %d\n",sizeof(a));
 printf("size of long long int : %d\n",sizeof(b));
 printf("size of double: %d\n",sizeof(a));
 printf("size of struct: %d\n",sizeof(s1));
}