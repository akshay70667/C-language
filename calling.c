#include <stdio.h>

// Calling by value and calling by reference

void square(int n)   // Call by value
{
    int a;
    a = n * n;
    printf("Square of the number %d = %d\n", n, a);
}

void _square(int *n)   // Call by reference
{
    int a;
    a = (*n) * (*n);
    printf("Square of the number %d = %d\n", *n, a);
}

int main()
{
    int no = 4;

    square(no);      // Passing value
    _square(&no);    // Passing address

    return 0;
}