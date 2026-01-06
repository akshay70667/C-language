#include <stdio.h>
#include <math.h>
int main()
{
    //some importand logic
    //power require maths libary
    int a=pow(3,2);
    //if 1st is - then answer is also -
    int b=-13%5;
    //if both are int answer will come in int
    float c=9/4;
    //if 1st is float and 2nd is int answer is float
    float d=9.0/4;
    //you can't directly store float value in int
    int e= (int) 1.999;
    printf("%d\n%d\n%f\n%f\n%d",a,b,c,d,e);
    return 0;
}