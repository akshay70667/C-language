#include <stdio.h>

// Program to remove blank spaces from a string
int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')   // skip spaces
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';  // terminate new string

    printf("String without spaces: %s\n", str);

    return 0;
}