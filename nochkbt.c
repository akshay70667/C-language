#include <stdio.h>
int main()
{
    //program to check no. is in between
    int a=9,b=100,c,d;
    printf("enter value of no.c:");
   // value input
    scanf("%d",&c);
    //formula
    d=a<c&&b>c;
    //final statement line
    printf("if 0 then no, if 1 then yes: %d \n",d);
    return 0;
}