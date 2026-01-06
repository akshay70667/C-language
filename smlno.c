#include <stdio.h>
int main()
{
    //program to find smallest no.
    int a,b,c;
    printf("enter value of no.a,b:");
   // value input
    scanf("%d%d",&a,&b);
    //formula
    c=a>b;
    //final statement line
    printf("true =1,false=0:\n");
    printf("%d>%d:%d",a,b,c);
    return 0;
}