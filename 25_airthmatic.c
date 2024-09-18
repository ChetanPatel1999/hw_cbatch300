#include <stdio.h>
void main()
{
    int a = 5, b = 12, mod;
    float ans;
    //  ans=a+b;
    //  ans=a-b;
    //  ans=a*b;
    // ans=a/(float)b;// type casting : one data type convert into another data type
    mod = a % b;
    // printf("ans = %f\n",ans);
    printf("%d", mod);
}