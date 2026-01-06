#include <stdio.h>
void USD(float);
void EUR(float);
void GBP(float);
int main()
{ // a simple program to covert USD, EUR, GBP currrency into INR using function
    float money;
    char type;
    printf("enter the amount of money : and the type of currency for (USD : a ,EUR : b, GBP : c)\n");
    if (scanf("%f %c", &money, &type) != 2 || money < 0)
    {
        printf("invalid input.Please enter a non negative no.\n");
        return 1;
    }
    switch (type)
    {
    case 'a':
        USD(money);
        break;
    case 'b':
        EUR(money);
        break;
    case 'c':
        GBP(money);
        break;
    default:
        printf("invalid currency type\n");
    }
    return 0;
}
void USD(float no)
{
    printf("USD %f : INR %.2f\n", no, no * 86.5525);
}
void EUR(float no)
{
    printf("EUR %f : INR %.2f\n", no, no * 89.2629);
}
void GBP(float no)
{
    printf("GBP %f : INR %.2f\n", no, no * 105.487);
}
