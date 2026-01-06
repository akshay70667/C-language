#include <stdio.h>
// declaration prototype
int calulate(int value);
int main()
{
    /*program to calulate value after gst */
    int price;
    printf("enter the value of the product :");
    scanf("%d", &price);
    price = calulate(price);
    printf("the value of product after gst : %d", price);
    return 0;
}
// function definition
int calulate(int value)
{
    value = value + (value * 0.18);
    return value;
}
