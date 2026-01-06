#include <stdio.h>
int main()
{
    //program to check divisibility
    int a,b,c;
    printf("enter value of no.a:");
   // value input
    scanf("%d",&a);
    /*formula 1st is for remainder check
     then 2nd is to check remain is 0 it can also be written as 
     a%2==0; */
    b=a%2;
    c=b==0;
    //final statement line
    printf("if 0 false, if 1 true is div by 2: %d \n",c);
    return 0;
}