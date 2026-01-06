#include <stdio.h>
int main()
{
  // progam to print patterns
  /* *****
     *****
     ***** */
  printf("new 1 pattern\n");
  for (int i = 1; i <= 3; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      printf("*", j);
    }
    printf("\n");
  }
  {
    /* ****
       ****
       ****
       **** */
    printf("new 2 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= 4; j++)
      {
        printf("*", j);
      }
      printf("\n");
    }
  }
  {
    /* 1234
       1234
       1234
       1234 */
    printf("new 3 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= 4; j++)
      {
        printf("%d", j);
      }
      printf("\n");
    }
  }
  {
    /* *
       **
       ***
       **** */
    printf("new 4 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  {
    /* ****
       ***
       **
       *     */
    printf("new 5 pattern\n");
    for (int i = 4; i >= 1; i--)
    {
      for (int j = 1; j <= i; j++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  {
    /* 1
       12
       123
       1234 */
    printf("new 6 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        printf("%d", j);
      }
      printf("\n");
    }
  }
  {
    /* 1234
       123
       12
       1    */
    printf("new 7 pattern\n");
    for (int i = 4; i >= 1; i--)
    {
      for (int j = 1; j <= i; j++)
      {
        printf("%d", j);
      }
      printf("\n");
    }
  }
  {
    /* 1
       13
       135
       1357 */
    printf("new 8 pattern\n");
    for (int i = 1; i <= 8; i += 2)
    {
      for (int j = 1; j <= i; j += 2)
      {
        printf("%d", j);
      }
      printf("\n");
    }
  }
  {
    /* ABCD
       ABCD
       ABCD
       ABCD */
    printf("new 9 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (char j = 'A'; j <= 'D'; j++)
      {
        printf("%c", j);
      }
      printf("\n");
    }
  }
  {
    /* A
       AB
       ABC
       ABCD */
    printf("new 10 pattern\n");
    for (char i = 'A'; i <= 'D'; i++)
    {
      for (char j = 'A'; j <= i; j++)
      {
        printf("%c", j);
      }
      printf("\n");
    }
  }
  {
    /* 1
       AB
       123
       ABCD
       12345 */
    printf("new 11 pattern\n");
    for (int i = 1; i <= 5; i++)
    {
      if (i % 2 == 1)
      {
        for (int j = 1; j <= i; j++)
        {
          printf("%d", j);
        }
        printf("\n");
      }
      else
      {
        for (char j = 'A'; j < 'A' + i; j++)
        {
          printf("%c", j);
        }
        printf("\n");
      }
    }
  }
  {
    /*   *
         *
       *****
         *
         *   */
    printf("new 12 pattern\n");
    for (int i = 1; i <= 5; i++)
    {
      for (int j = 1; j <= 5; j++)
      {
        if (i == 3 || j == 3)
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }
  }
  {
    /* ******
       *    *
       *    *
       ******   */
    printf("new 13 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= 6; j++)
      {
        if (i == 1 || i == 4 || j == 1 || j == 6)
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }
  }
  {
    /* *   *
        * *
         *
        * *
       *   *  */
    printf("new 14 pattern\n");
    for (int i = 1; i <= 5; i++)
    {
      for (int j = 1; j <= 5; j++)
      {
        if (i == j || i + j == 6)
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }
  }
  {
    /* 1
       23
       456
       78910 */
    printf("new 15 pattern\n");
    int a = 1;
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        printf("%d", a);
        a++;
      }
      printf("\n");
    }
  }
  {
    /* 1
       35
       7911
       13151719 */
    printf("new 16 pattern\n");
    int a = 1;
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        printf("%d", a);
        a += 2;
      }
      printf("\n");
    }
  }
  {
    /* 1
       01
       101
       0101 */
    printf("new 17 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        if (j % 2 == 1)
        {
          printf("1");
        }
        else
        {
          printf("0");
        }
      }
      printf("\n");
    }
  }
  {
    /*    *
         **
        ***
       ****  */
    printf("new 18 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= 4 - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= i; k++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  {
    /*    ****
         ****
        ****
       ****    */
    printf("new 19 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= 4 - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 4; k++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  {
    /*    A
         AB
        ABC
       ABCD */
    printf("new 20 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= 4 - i; j++)
      {
        printf(" ");
      }
      for (char k = 'A'; k < 'A' + i; k++)
      {
        printf("%c", k);
      }
      printf("\n");
    }
  }
  {
    /*    *
         ***
        *****
       ******* */
    printf("new 21 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= 4 - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  {
    /*    1
         123
        12345
       1234567 */
    printf("new 22 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= 4 - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        printf("%d", k);
      }
      printf("\n");
    }
  }
  {
    /*    A
         ABC
        ABCDE
       ABCDEFG */
    printf("new 23 pattern\n");
    for (int i = 'A'; i <= 'D'; i++)
    {
      for (int j = 68; j > i; j--)
      {
        printf(" ");
      }
      for (char k = 'A'; k <= 2 * (i - 'A') + 'A'; k++)
      {
        printf("%c", k);
      }
      printf("\n");
    }
  }
  {
    /*    1
         121
        12321
       1234321 */
    printf("new 24 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 3; j >= i; j--)
      {
        printf(" ");
      }
      for (int k = 1; k <= i; k++)
      {
        printf("%d", k);
      }
      for (int l = i - 1; l >= 1; l--)
      {
        printf("%d", l);
      }
      printf("\n");
    }
  }
  {
    /*    A
         ABA
        ABCBA
       ABCDCBA */
    printf("new 25 pattern\n");
    for (char i = 'A'; i <= 'E'; i++)
    {
      for (char j = 'E'; j >= i; j--)
      {
        printf(" ");
      }
      for (char k = 'A'; k <= i; k++)
      {
        printf("%c", k);
      }
      for (char l = i - 1; l >= 'A'; l--)
      {
        printf("%c", l);
      }
      printf("\n");
    }
  }
  {
    /*    *
         ***
        *****
       *******
        *****
         ***
          *    */
    printf("new 26 pattern\n");
    for (int i = 1; i <= 5; i++)
    {
      for (int j = 5; j >= i; j--)
      {
        printf(" ");
      }
      for (int k = 1; k <= i; k++)
      {
        printf("*");
      }
      for (int l = i - 1; l >= 1; l--)
      {
        printf("*");
      }
      printf("\n");
    }
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= i + 1; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 5 - i; k++)
      {
        printf("*");
      }
      for (int l = 3 - i + 1; l >= 1; l--)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  {
    /* *******
       *** ***
       **   **
       *     *  */
    printf("new 27 pattern\n");
    for (int i = 1; i <= 1; i++)
    {
      for (int j = 7; j >= i; j--)
      {
        printf("*");
      }
      printf("\n");
    }
    for (int i = 1; i <= 3; i++)
    {
      for (int k = 3; k >= i; k--)
      {
        printf("*");
      }
      for (int l = 1; l < i + i; l++)
      {
        printf(" ");
      }
      for (int k = 3; k >= i; k--)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  {
    /* ****
        ***
         **
          *  */
    printf("new 28 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int k = 1; k <= i - 1; k++)
      {
        printf(" ");
      }
      for (int l = 1; l + i <= 5; l++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  {
    /* 1234567
       123 567
       12   67
       1     7  */
    printf("new 29 pattern\n");
    for (int i = 1; i <= 1; i++)
    {
      for (int j = 1; j <= 7; j++)
      {
        printf("%d", j);
      }
      printf("\n");
    }
    for (int i = 1; i <= 3; i++)
    {
      for (int k = 1; k + i <= 4; k++)
      {
        printf("%d", k);
      }
      for (int l = 1; l < i + i; l++)
      {
        printf(" ");
      }
      for (int k = 5 + i - 1; k <= 7; k++)
      {
        printf("%d", k);
      }
      printf("\n");
    }
  }
  {
    /* ABCDEFG
       ABC EFG
       AB   FG
       A     G  */
    printf("new 30 pattern\n");
    for (char j = 'A'; j <= 'G'; j++)
    {
      printf("%c", j);
    }
    printf("\n");
    for (int i = 1; i <= 3; i++)
    {
      for (char k = 'A'; k <= 'D' - i; k++)
      {
        printf("%c", k);
      }
      for (int l = 1; l < i + i; l++)
      {
        printf(" ");
      }
      for (char k = 'E' + i - 1; k <= 'G'; k++)
      {
        printf("%c", k);
      }
      printf("\n");
    }
  }
  {
    /* 4444444
       4333334
       4322234
       4321234
       4322234
       4333334
       4444444  */
    printf("new 31 pattern\n");
    int no;
    printf("enter the size of the pattern:");
    scanf("%d", &no);
    for (int i = 0; i < no; i++)
    {
      for (int j = 0; j < no; j++)
      {
        int min = i < j ? i : j;
        min = min < no - i - 1 ? min : no - i - 1;
        min = min < no - j - 1 ? min : no - j - 1;
        printf("%d", 4 - min);
      }
      printf("\n");
    }
  }
   {
    /*  a         a
        aa       aa
        aaaa   aaaa
        aaaaa aaaaa
        aaaaaaaaaaa       
         aaaaaaaaa
          aaaaaaa
           aaaaa
            aaa
             a       */
    printf("new 32 pattern\n");
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 1; j <= i+i; j+=2)
      {
        printf("a");
      }
      for (int k = 8-i; k >= i; k--)
      {
        printf(" ");
      }
      for (int l = i; l >= 1; l--)
      {
        printf("a");
      }
      printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
      for (int j = 1; j < i ; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <=6 - i; k++)
      {
        printf("a");
      }
      for (int l = 4 - i + 1; l >= 1; l--)
      {
        printf("a");
      }
      printf("\n");
    }
  }
   {
    /*  *
        ********
        ********
        ********
        *       
        *
        *
        *
       ***
      *****       */
    printf("new 33 pattern\n");
    for (int i = 1; i <= 10; i++)
    {
      for (int j = 1; j <= i+i; j+=2)
      {
        printf("a");
      }
      for (int k = 8-i; k >= i; k--)
      {
        printf(" ");
      }
      for (int l = i; l >= 1; l--)
      {
        printf("a");
      }
      printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
      for (int j = 1; j < i ; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <=6 - i; k++)
      {
        printf("a");
      }
      for (int l = 4 - i + 1; l >= 1; l--)
      {
        printf("a");
      }
      printf("\n");
    }
  }
  return 0;
}