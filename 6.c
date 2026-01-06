#include <stdio.h>
int sum(int a)
{
    int b, c, d, e;
    b = a / 100;
    c = (a / 10) % 10;
    d = a % 10;
    e = b + c + d;
    printf("after adding the digit of a which is %d to each other:%d", a, e);
    return 0;
}
int main()
{
    // simple program to add the digit of a number upto 666
    int a, b, c, d, e, f;
    char term;
    // input validation
    printf("enter the no. :");
    if (scanf("%d%c", &a, &term) != 2 || term != '\n' || a <= 9 || a > 666)
    {
        printf("invalid input.Please enter a positive no. with 2 digits\n");
        return 1;
    }
    sum(a);
    return 0;
}