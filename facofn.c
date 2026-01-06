#include <stdio.h>
int fact(int no,int value){
    if(no==0)
    {
       return value;
    }
    return fact(no-1,value*no);
}
int main()
{
    // program to calculate factorial of a number
    int no, factorial = 1, i = 1;
    char term;
    while (1)
    {
        printf("enter the no:");
        // Input validation
        if (scanf("%d%c", &no, &term) != 2 || term != '\n' || no < -1)
        {
            printf("invalid input...\n");
            while (getchar() != '\n') // Clear input buffer
                ;
            continue;
        }
        // Calculate factorial
      factorial=fact(no,1);
        printf("factorial of %d is %d\n", no, factorial);
        // Stop the program after one successful calculation
        break;
    }
    return 0;
}
