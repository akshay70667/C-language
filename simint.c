#include <stdio.h>
int main()
{
    //program to calculate simple interest
    float si,p,r,t,ta;
    //input values 
    printf("enter value of principal,rate,time:");
    scanf("%f%f%f",&p,&r,&t);
    //formula
    si=(p*r*t)*0.01;
    ta=p+si;
    //display result
    printf("simple interest:%f \n total amt:%f",si,ta);
    return 0;
}