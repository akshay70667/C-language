#include <stdio.h>
#include <string.h>

// Program to add salt to a password
int main()
{
    char password[100];
    char salt[100];
    char position[20];
    char newpass[200];

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);

    printf("Enter the salt: ");
    fgets(salt, sizeof(salt), stdin);

    printf("Enter position (front/back): ");
    fgets(position, sizeof(position), stdin);

    // remove newline characters
    password[strcspn(password, "\n")] = '\0';
    salt[strcspn(salt, "\n")] = '\0';
    position[strcspn(position, "\n")] = '\0';

    if (strcmp(position, "front") == 0)
    {
        strcpy(newpass, salt);
        strcat(newpass, password);
    }
    else if (strcmp(position, "back") == 0)
    {
        strcpy(newpass, password);
        strcat(newpass, salt);
    }
    else
    {
        printf("Invalid position\n");
        return 0;
    }

    printf("New salted password: %s\n", newpass);

    return 0;
}