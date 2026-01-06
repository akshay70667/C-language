#include <stdio.h>
int main()
{
    /*this is an example of oprator precedence it go as 
    *,/,% then +,- and = but
     at same level it go as (associativity) left to right */
    int a,b,c,d,e;
    a=5*2/2*3;
    b=5*2-2*3;
    c=5*(2/2)*3;
    d=5+2/2*3;
    printf("%d\n%d\n%d\n%d",a,b,c,d);
    return 0; 
}   