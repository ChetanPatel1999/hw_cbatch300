//wap to check given number is nagative/postive.
#include<stdio.h>
int negpos(int num)
{
    if(num>0) return 1;
    else return 0;
}
void main()
{
 int n=1562; 
 if(negpos(n))
 {
    printf("postive number ");
 }
 else{
    printf("nagative number ");
 }
}