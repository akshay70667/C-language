#include <stdio.h>
// program to take user input and then print its length
int stringLength(char arr[]);

int main()
{
    char input[50];

    printf("Enter your full name: ");
    fgets(input, sizeof(input), stdin);

    int len = stringLength(input);

    printf("Length of string = %d\n", len);

    return 0;
}

int stringLength(char arr[])
{
    int i;

    for (i = 0; arr[i] != '\0'; i++)
    {
        // loop runs until null character
    }

    return i-1;
}