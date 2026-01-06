#include<stdio.h>
int main()
//progam to print 0 to 10 with diffrent loops
{
    int n;
    printf("enter the max no.");
    scanf("%d",&n);
    if(n<0){
      printf("plese enter a non negative no.");
      return 1;
    }
printf("with for loop\n");
    for(int i=0;i<=n;i++){
        printf("%d\n",i);
    }
printf("with while loop\n");
  int i=0;
  while(i<=n){
      printf("%d\n",i);
      i++;
    }
printf("with do while loop\n");
   i=0;
  do{
      printf("%d\n",i);
      i++;
    }while(i<=n);
  return 0;
}