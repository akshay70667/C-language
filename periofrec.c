#include <stdio.h>
int main()
{
    //progrsm to generate primeter of a rectangle 
    int l,b,a=2;
    //input data
    printf("enter length ,breath:");
    scanf("%d %d",&l,&b);
    //formula
    int peri = a*(l+b);
    //solution
    printf("perimeter of rectangle: %d",peri);
    return 0;
}