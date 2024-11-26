// read a file
//fscanf () // to read a file
#include<stdio.h>
void main()
{
  FILE *ptr;
  char ch[30];
  ptr=fopen("factorial.txt","r");
  fscanf(ptr,"%s",ch);
  printf("%s ",ch);
  fscanf(ptr,"%s",ch);
  printf("%s ",ch);
  fclose(ptr);
}