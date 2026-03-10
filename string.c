#include <stdio.h>
#include <string.h>

// Program to demonstrate important string library functions
int main()
{
    char input[50];

    printf("Enter your full name: ");
    fgets(input, sizeof(input), stdin);

    // remove newline from fgets
    input[strcspn(input, "\n")] = '\0';

    // strlen()
    int length = strlen(input);
    printf("Length of string = %d\n", length);

    char oldstr[20] = "old";
    char newstr[20] = "new";

    // strcpy()
    strcpy(newstr, oldstr);
    printf("After strcpy: ");
    puts(newstr);

    // strcat()
    strcat(oldstr, "new");
    printf("After strcat: ");
    puts(oldstr);

    // strcmp()
    int result = strcmp(oldstr, newstr);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result > 0)
        printf("oldstr is greater than newstr\n");
    else
        printf("oldstr is smaller than newstr\n");

    // string slicing
    int n, m, j = 0;

    printf("Enter start and end index: ");
    scanf("%d %d", &n, &m);

    int len = strlen(oldstr);

    if (n >= 0 && m <= len && n < m)
    {
        for (int i = n; i < m; i++)
        {
            newstr[j++] = oldstr[i];
        }

        newstr[j] = '\0';
        printf("Sliced string: ");
        puts(newstr);
    }
    else
    {
        printf("Invalid slice range\n");
    }

    return 0;
}