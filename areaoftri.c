#include <stdio.h>
int main()
{
    //program to generate area of triangle
    int b,h;
    //input values
    printf("enter base ,height:");
    scanf("%d %d",&b,&h);
    //formula
    int area = 0.5*b*h;
    //answer
    printf("area of triangle: %d",area);
    return 0;
}
