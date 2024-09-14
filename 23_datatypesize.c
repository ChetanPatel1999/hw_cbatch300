// data type
#include<stdio.h>
void main()
{
 int a=12;
 char ch;
 short int b;
 long long int k; // 8 byte
 float f;// 4 byte
 double d; // 8 byte its also store float value
 printf("size of int = %d byte\n",sizeof(a));
 printf("size of char = %d byte\n",sizeof(ch));	
 printf("size of short int = %d byte\n",sizeof(b));
 unsigned char l=257;
 printf("vale of l = %d ",l);
}
