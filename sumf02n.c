#include <stdio.h>
int sumt(int value,int total){
  if(value==0){
    return total;
  }
  return sumt(value-1,total+value);
}
int main()
{ // progam to calcutate sum of all the no. from 0 to n term and printing them from n to 0
  int n, sum = 0;
  // valid input check
  while (1)// infinity loop
  { 
    printf("enter the non negative integer:");
    //(==1)(true) this is use to check if the enter digit is successfully saved in n and n is bigger than -1 
    if (scanf("%d", &n) == 1 && n >= 0 )
    {
      break;//break is to exit the the loop
    }
    else//if false
    {
      printf("please enter a valid integer:\n");
      printf("-------going back in time restarting from 0-------\n");
      while (getchar() != '\n');//clear the input buffer
    }
  }//true code
  sum=sumt(n,0);
  printf("no. from %d to 0 in reverse order\n", n);
  for (int j = n; j >= 0; j--)//when using more than 2 statement you must use {}
  {
    printf("%d  ", j);
  }
  printf("\nsum of all the no from 0 to %d :%d", n,sum);
  return 0;
}