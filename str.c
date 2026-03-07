#include <stdio.h>

// Program to print strings using a user-defined function
void printstring(char arr[]);

int main()
{
    char name[] = {'a','k','s','h','a','y','\0'};
    char name2[] = "akshay";
    char name3[50];
    char name4[50];

    printf("Enter your full name: ");
    fgets(name4, sizeof(name4), stdin);
    puts(name4);

    printf("Enter your name again: ");
    scanf("%s", name3);

    printf("Your name is %s\n", name3);

    printstring(name);
    printstring(name2);

    return 0;
}

void printstring(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
}