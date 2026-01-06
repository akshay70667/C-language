#include <stdio.h>
int main()
{
    // program to check if the no. in a range are prime
    int start, end;
    char term;
    while (1)
    {
        printf("enter the range (start and end):");
        // Input validation
        if (scanf("%d %d%c", &start, &end, &term) != 3 || start < 0 || end < start)
        // if any one of these condition is fullfilled it will print invalid input
        {
            printf("invalid input. Please enter two integers where start >= 0 and end >= start.\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
                ; // Clear input buffer
            continue;
        }
        // Check each no. in the range
        for (int j = start; j <= end; j++)
        {
            if (j < 2)
            {
                printf("%d is not a prime number.\n", j);
                continue;
            }
            // Assume the number is prime
            int isPrime = 1;
            if (j % 2 == 0 && j != 2)
                isPrime = 0;
            else
                for (int i = 3; i * i <= j; i += 2)
                {
                    if (j % i == 0)
                    {
                        isPrime = 0; // Not prime if divisible by any i
                        break;
                    }
                }
            // Output result based on the isPrime flag
            if (isPrime)
            {
                printf("%d is a prime number.\n", j);
            }
            else
            {
                printf("%d is not a prime number.\n", j);
            }
        }
        break; // exit hte loop after successful excution
    }
    return 0;
}