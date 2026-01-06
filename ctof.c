#include <stdio.h>
int conv(int a){
    return a*1.8+32;
}
int main()
{
    //program to generate celsius to fahrenheit
    int celsius,fahrenheit;
    //input celsius
    printf("enter celsius:");
    scanf("%d",&celsius);
    //formula
    fahrenheit =conv(celsius);
    //answer
    printf("fahrenheit: %d",fahrenheit);
    return 0;
}
