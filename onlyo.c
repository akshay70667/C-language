#include <stdio.h>
int main()
{
  // program to print only even no. from 0 till the we reach the no we have entered
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
      break;
    }
       for (int i = 5; i <= no; i++)
    {
      if (i % 2 != 0)
      {
        printf("%d\n", i);
      }
    }
  }
  return 0;
}
