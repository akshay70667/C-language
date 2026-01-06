#include <stdio.h>
int main()
{
    //program to generate compound interst
    float ci,p,r,t,n,amt;
    //int values
    printf("enter value of principal,rate,time,no.of time int is compound:");
    scanf("%f%f%f%f",&p,&r,&t,&n);
    //formula
    amt=p*(1+r*0.01)*n;
    ci=amt-p;
    //result
    printf("compound interest:%f \n total amt:%f",ci,amt);
    return 0;
}