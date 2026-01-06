#include <stdio.h>
int main()
{
    // program to print only no. 0 to n term except 5 and 7
    int no;
    char term;
    while (1)
    {
        printf("enter the no:");
        if (scanf("%d%c", &no, &term) != 2 || term != '\n' || no < -1)
        {
            printf("invalid input...\n");
            while (getchar() != '\n')
                ;
            continue;
        }
        if (no == -1)
        {
            printf("ending loop");
            break;
        }
        for (int i = 0; i <= no; i++)
        {
            if (i == 5 || i == 7)
            {
                continue;
            }
            printf("%d\n", i);
        }
    }
    return 0;
}
