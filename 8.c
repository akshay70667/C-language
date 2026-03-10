#include <stdio.h>

// program to take a string input from the user using %c
int main()
{
    char str[100];
    char ch;
    int i = 0;
    while (1)
    {
        scanf("%c", &ch);
        if (ch == '\n')
            break;
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}