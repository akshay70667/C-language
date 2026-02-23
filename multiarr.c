#include <stdio.h>

// Function to take input for 2D array
void inputArray(int arr[2][2]) {
    printf("Enter 4 elements for 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to display 2D array
void displayArray(int arr[2][2]) {
    printf("\nThe array elements are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);  // printing value
        }
        printf("\n");
    }
}

int main() {
    int a[2][2];

    inputArray(a);     // Passing array to function
    displayArray(a);   // Passing array to function

    return 0;
}