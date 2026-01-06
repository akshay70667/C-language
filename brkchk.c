#include <stdio.h>
int main()
{
  // program to to check if the no. is even consecutively
  int no;
  char term;
  while (1)
  {
    printf("enter the no:");
    if (scanf("%d%c", &no, &term) != 2 || term != '\n')
    //when you press enter and go to next line \n is saved under term
    {
      printf("invalid input...\n");
      while (getchar() != '\n');
      continue;
      //it skips all that is after itself and start the loop again
    }
    if (no % 2 == 1)
    {
      printf("odd no. detected exsiting....");
      break;
    }
    printf("%d is even\n", no);
  }
  return 0;
}
