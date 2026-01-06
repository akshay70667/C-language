#include<stdio.h>
int power(int a,int b){
    int c=1;
    for(int i=1;i<=b;i++){
        c*=a;
    }
    printf("The power of %d raised to %d is: %d\n",a,b,c);
    return 0;
}
int main()
{
    int num,times;
    // Taking input from the user
    printf(" Enter the base and exponent: ");
    while (scanf("%d%d", &num, &times) != 2) {  // Input validation
        printf("Invalid input! Please enter a numeric value: ");
        while (getchar() != '\n');  // Clear input buffer
    }
    // Call the function to check temperature
    power(num,times);
    return 0;
}
