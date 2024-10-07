//wap to find digit 3 in given number.
#include<stdio.h>
void main()
{
    int num,rem,f=0;
    num=433563;
    while(num>0)
    {
        rem=num%10;
        if(rem==3)
        {
          f=1; 
          break;
        }
        num=num/10;

    }
    
    if(f==1)
    {
       printf("3 is find") ;
    }
    else{
      printf("3 is not find");  
    }
 
}