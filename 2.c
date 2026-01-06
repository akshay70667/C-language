#include <stdio.h>
int main()
{
    // simple program check if the given no. is a leap year or not
    int year;
    char term;
    while (1)
    {
        // input validation
        printf("enter the year:");
        if (scanf("%d%c", &year, &term) != 2 || term != '\n')
        {
            printf("invalid input...\n");
            while (getchar() != '\n')
                ;
            // clear invalid input
            continue;
        }
        if (year < 0)
        {
            printf("exiting the program.\n");
            break;
        }
        // leap year check
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            printf("%d : yes it is a leap year\n", year);
        }
        else
        {
            printf("%d : no its not a leap year\n", year);
        }
    }
    return 0;
}