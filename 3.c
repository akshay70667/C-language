#include <stdio.h>
int main()
{
    // simple program to print check if the given no. positive or not
    int m,n=0;
    char term;
    while (1)
    {
        // input validation
        printf("enter the value m:");
        if (scanf("%d%c", &m, &term) != 2 )
        {
            printf("invalid input...\n");
            while (getchar() != '\n')
                ;
            // clear invalid input
            continue;
        }
        if (term != '\n')
        {
            printf("exiting the program.\n");
            break;
        }
        // true code
        if (m>0)
        {
            n=1;
            printf("%d : m is larger than 0\n", n);
        }
        else if (m==0)
        {
           n=0;
            printf("%d : m is 0\n", n);
        }
        else
        {
            n=-1;
             printf("%d : m is less than 0\n", n);
        }
    }
    return 0;
}