#include <stdio.h>
int main()
{
    //program to check average
    int a,b,c,avg;
    printf("enter value of no.a,b,c:");
   // value input
    scanf("%d%d%d",&a,&b,&c);
    //formula
    avg=(a+b+c)/3;
    //final statement line
    printf("average of %d,%d,%d: %d",a,b,c,avg);
    return 0;
}