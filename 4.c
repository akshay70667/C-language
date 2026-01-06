#include <stdio.h>
int main()
{
    // simple program to claculate your electricity bill
    float unit, bill;
    char term;
    // input validation
    printf("enter the units consumed :");
    if (scanf("%f%c", &unit, &term) != 2 || term != '\n' || unit <= 0)
    {
        printf("invalid input.Please enter a positive no.\n");
        return 1;
    }
    // true code
    if (unit <= 50)
    {
        bill = unit * 0.50;
    }
    else if (unit <= 150)
    {
        bill=25+(unit - 50)*0.75;
    }
    else if (unit <= 250)
    {
        bill=100+(unit- 150)*1.2;
    }
    else
    {
        bill=220+(unit -250)*1.5;
    }
    bill*=1.20; 
    printf("your eletricity bill is of $%f",bill);
    return 0;
}