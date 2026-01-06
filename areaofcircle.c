#include <stdio.h>
int main()
{
    //program to generate area of circle
    float pi=3.14;
    int r,area;
    printf("enter the value of radius r:");
    //input value of radius
    scanf("%d",&r);
   //formula
    area=pi*r*r;
    //answer
    printf("area of cirle: %d",area);
    return 0;
}