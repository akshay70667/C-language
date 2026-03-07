#include <stdio.h>

// Program to store two multiplication tables in a 2D array
int main()
{

    int table[2][10];
    int n, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n, &n2);

    // Store tables
    for (int i = 0; i < 10; i++)
    {
        table[0][i] = n * (i + 1);
        table[1][i] = n2 * (i + 1);
    }

    printf("\nTable of %d:\n", n);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", table[0][i]);
    }

    printf("\n\nTable of %d:\n", n2);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", table[1][i]);
    }

    return 0;
}