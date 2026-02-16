#include <stdio.h>

// Program to store elements of an array and then print them
int main() {
    
    int a[5];

    printf("Enter 5 array elements:\n");

    // Input loop
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nThe array elements are:\n");

    // Output loop
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}