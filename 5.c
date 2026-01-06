#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// two player game guess the number with a scorce system
int main()
{
    printf("Welcome to the Two-Player Guess the Number Game!\n");
    printf("Players take turns guessing a number between 1 and 10.\n");
    int a, b, c, d = 0, e = 0;
    char f;
    srand(time(NULL));
    while (1)
    {
        a = (rand() % 10) + 1;
        printf("\nPlayer 1, enter your guess: ");
        scanf("%d", &b);
        if (a == b)
        {
            printf("Player 1 guessed correctly! The number was %d.\n", b);
            d++;
            printf("Scores: Player 1 = %d, Player 2 = %d\n", d, e);
        }
        else
        {
            printf("Player 1 guessed incorrectly.\n");
        }
        printf("\nPlayer 2, enter your guess: ");
        scanf("%d", &c);
        if (a == c)
        {
            printf("Player 1 guessed correctly! The number was %d.\n", c);
            e++;
            printf("Scores: Player 1 = %d, Player 2 = %d\n", d, e);
        }
        else
        {
            printf("Player 1 guessed incorrectly. The number was %d.\n", a);
        }
        printf("\nDo you want to continue? (Y/N): ");
        while (getchar() != '\n')
            ; // Clear input buffer
        scanf("%c", &f);
        if (f == 'N')
        {
            printf("\nFinal Scores: Player 1 = %d, Player 2 = %d\n", d, e);
            printf("Thanks for playing!\n");
            break;
        }
    }
}