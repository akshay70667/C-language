#include <stdio.h>
int table(int n);
int main()
{ // progam to print table of given no.
  int n,k;
  // valid input check
  while (1) // infinity loop
  {
    printf("enter a integer:");
    // check if the valid integer is successfully saved in n
    if (scanf("%d%d", &n,&k) == 2)
    {
      break; // it break you free from ALL the loop you are in it ALL....S
    }
    else // if the input is invalid
    {
      printf("please enter a valid integer:\n");
      printf("-------going back in time restarting from 0-------\n");
      // clear the input buffer
      while (getchar() != '\n')
        ;
    }
  } // after function declaration no need for data type in calling
  table(n);
  table(k);
  return 0;
}
int table(int n)
{
  printf("table of %d\n", n);
  for (int i = 1; i <= 10; i++) // loop to print the table
  {
    printf("%dx%d=%d\n", n, i, n * i);
  }
}