// logical operator     
#include <stdio.h>
void main()
{
    int ans;
    // ans= 12<55 && 78<99 && 9==9;
    //  ans= (12<5 || 78<9 || 99==9);
    // ans = !(12 < 5 || 78 < 9 || 99 == 9);
    ans=!(78==89);
    ans=!12;
    printf("ans = %d", ans);
}