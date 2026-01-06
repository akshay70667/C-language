#include <stdio.h>
#include <math.h>
int main()
{
    // program to generate square of any no.
    float a, b;
    // input value from user
    printf("enter the no.:");
    scanf("%f", &a);
    // formula
    b = pow(a, 2);
    // result
    printf("square of a: %.2f", b);
    return 0;
}