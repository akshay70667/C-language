#include <stdio.h>

// Program to store elements of an array and print them using pointer
int main() {

    int a[5];
    int *ptr = a;   // pointer to first element

    printf("Enter 5 array elements:\n");

    // Input using pointer
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    printf("\nThe array elements are:\n");

    // Output using pointer
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}