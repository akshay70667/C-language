#include <stdio.h>
// Function to check if the temperature is hot, cold, or normal
void check(int num)
{
    if (num < 16)
    {
        printf("The temperature is cold\n");
    }
    else if (num > 29)
    {
        printf("The temperature is hot\n");
    }
    else{
        printf("It is room temperature\n");
    }
    return;
}
int main()
{
    int num;
    // Taking input from the user
    printf("Enter the temperature in Celsius: ");
    while (scanf("%d", &num) != 1) {  // Input validation
        printf("Invalid input! Please enter a numeric temperature: ");
        while (getchar() != '\n');  // Clear input buffer
    }
    // Call the function to check temperature
   check(num);
    return 0;
}