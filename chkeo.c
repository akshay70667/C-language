#include <stdio.h>
int main()
{
    //program to check even / odd
    int a,b,c;
    printf("enter value of no.a:");
   // value input
    scanf("%d",&a);
    //formula
    b=a%2==0;
    //final statement line
    printf("if 0 then odd, if 1 then even: %d \n",b);
    return 0;
}