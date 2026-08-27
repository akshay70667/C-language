#include <stdio.h>

// Program to input student info. from a user & store it in a file

int main()
{
    FILE *fptr;

    fptr = fopen("c.txt", "r");

    if (fptr == NULL)
    {
        printf("file doesn't exist\n");
    }
    else
    {
        fclose(fptr);
    }

    fptr = fopen("c.txt", "a");
    fprintf(fptr, "\n");

    char name[100];
    int age;
    float cgpa;
    char choice;

    while (1)
    {
        printf("Enter your name: ");
        scanf("%s", name);
        fprintf(fptr, "Name: %s\n", name);

        printf("Enter your age: ");
        scanf("%d", &age);
        fprintf(fptr, "Age: %d\n", age);

        printf("Enter your CGPA: ");
        scanf("%f", &cgpa);
        fprintf(fptr, "CGPA: %.2f\n", cgpa);

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n')
            break;

        printf("\n");
    }

    fclose(fptr);

    return 0;
}