#include <stdio.h>
int sum(int a,int b);
int main()
{
    //program to generate sum of 2 no.
    int a,b;
    printf("enter value of no.a,b:");
   // value input
    scanf("%d %d",&a, &b);
    //sum of 2 no.
    sum(a,b);
    //diff of 2 no without using new variable
    printf("\ndiff of 2 no. %d",a-b);
    return 0;
}
int sum(int a,int b){
     printf("sum of 2 no. %d",a+b);
}