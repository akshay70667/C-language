#include <stdio.h>
#include <math.h>
// Function to find the square root
double Root(double num)
{
    return sqrt(num);
}
int main()
{
    double num;
    // Taking input from the user
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num < 0)
    {
        printf("Square root of a negative number is not real.\n");
    }
    else
    {
        // Calling the function and displaying the result
        printf("Square root of %.2lf is %.2lf\n", num, Root(num));
    }
    return 0;
}
