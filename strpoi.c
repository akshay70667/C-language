#include <stdio.h>

// Function to print string using pointer traversal
void printString(char *str);

int main()
{
    char *name = "akshay";   // pointer to string literal
    char input[50];          // array for user input

    printf("Initial name:\n");
    printString(name);

    // Pointer reassignment
    name = "rajat";
    printf("\nAfter pointer reassignment:\n");
    printString(name);

    // Taking user input
    printf("\nEnter your full name: ");
    fgets(input, sizeof(input), stdin);

    printf("\nYou entered: ");
    printString(input);

    return 0;
}

// Print string using pointer increment
void printString(char *str)
{
    while (*str != '\0')
    {
        printf("%c ", *str);
        str++;  // move pointer to next character
    }
    printf("\n");
}