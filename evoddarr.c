#include <stdio.h>

// Program to count even and odd numbers in an array
void check(int a[], int size) {
    int even = 0, odd = 0;

    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {   // even condition
            even++;
        } else {
            odd++;
        }
    }

    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);
}

int main() {
    int a[5];

    printf("Enter 5 array elements:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    check(a, 5);

    return 0;
} 