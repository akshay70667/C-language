#include <stdio.h>

// Program to store elements of an array and then print them after adding 18% GST
int main() {
    
    float a[5];

    printf("Enter 5 prices:\n");

    // Input loop
    for (int i = 0; i < 5; i++) {
        scanf("%f", &a[i]);
    }

    printf("\nPrices after adding 18%% GST:\n");

    // Output loop
    for (int i = 0; i < 5; i++) {
        float gst_price = a[i] + (0.18 * a[i]);
        printf("%.2f ", gst_price);
    }

    return 0;
}
