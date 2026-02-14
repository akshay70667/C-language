#include <stdio.h>

// Program to print elements of an array in reverse order
int main() {
    
    // Declare and initialize the array
    int a[] = {1, 2, 3, 4, 5};
    
    // Calculate the number of elements in the array
    int size = sizeof(a) / sizeof(a[0]);
    
    // Print message
    printf("Array in reverse order:\n");
    
    // Loop from last index to first index
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", a[i]);   // Print each element
    }
    
    return 0;   // Indicate successful execution
}