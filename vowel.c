#include <stdio.h>

// program to count vowels in a string
int main()
{
    char input[50];
    int count = 0;

    printf("Enter your full name: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i]=='a' || input[i]=='e' || input[i]=='i' ||
            input[i]=='o' || input[i]=='u' ||
            input[i]=='A' || input[i]=='E' || input[i]=='I' ||
            input[i]=='O' || input[i]=='U')
        {
            count++;
        }
    }

    printf("Number of vowels = %d\n", count);

    return 0;
}