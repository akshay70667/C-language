#include <stdio.h>

// Program to convert lowercase letters to uppercase
int main()
{
    char input[50];

    printf("Enter your full name: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            input[i] = input[i] - 32;
        }
    }

    printf("Uppercase string = %s\n", input);

    return 0;
}