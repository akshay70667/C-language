#include <stdio.h>

// Program to find greater number using pointers
int main() {
    int a, b;
    
    // Taking input
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    // Declaring pointers
    int *ptr1 = &a;
    int *ptr2 = &b;
    
    // Comparing values using pointers
    if (*ptr1 > *ptr2) {
        printf("%d first is greater\n", *ptr1);
    }
    else if (*ptr1 < *ptr2) {
        printf("%d second is greater\n", *ptr2);
    }
    else {
        printf("Both numbers are equal\n");
    }
    
    return 0;
}
