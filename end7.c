#include <stdio.h>
int main()
{
  // program to check if the no. is mutiple of 7 it stop when multiple 7 is enter
  int no;
  char term;
  while (1)
  {
    printf("enter the no:");
    if (scanf("%d%c", &no, &term) != 2 || term != '\n')
    {
      printf("invalid input...\n");
      while (getchar() != '\n');
      continue;
    }
    if (no % 7 == 0)
    {
      printf("multiple of 7 detected exsiting....");
      break;
    }
    printf("%d is not a multiple of 7\n", no);
  }
  return 0;
}
