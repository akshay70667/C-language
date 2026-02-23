#include <stdio.h>

// Function to calculate sum, average and product using pointers
void calculate(int a, int b, int *sum, float *avg, int *product)
{
    *sum = a + b;
    *avg = (a + b) / 2.0;   // 2.0 for proper float division
    *product = a * b;
}

int main()
{
    int a = 5, b = 5;
    int sum, product;
    float avg;

    // Passing addresses (Call by Reference)
    calculate(a, b, &sum, &avg, &product);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    printf("Product = %d\n", product);

    return 0;
}