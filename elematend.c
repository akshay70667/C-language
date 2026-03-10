#include <stdio.h>
//program to add character at the end of a string
int main() {

    int arr[10];          // capacity
    int length = 0;       // current elements
    int capacity = 10;
    int element;

    printf("How many elements do you want to enter: ");
    scanf("%d", &length);

    if (length > capacity) {
        printf("Exceeds array capacity\n");
        return 0;
    }

    printf("Enter %d elements:\n", length);

    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert at end: ");
    scanf("%d", &element);

    if (length < capacity) {
        arr[length] = element;
        length++;
    } else {
        printf("Array is full\n");
    }

    printf("\nArray elements:\n");

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}