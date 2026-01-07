#include <stdio.h>
int count;
int main()
{
      // Program to print Fibonacci series till 'n' th term with loop
    printf("enter the n term till which you want to print the series :");
    scanf("%d", &count);

    int a = 0, b = 1, c = 1;
    printf("%d\n%d\n",a, b);
     for (int i = 0; i < count; i++)
    {
    printf("%d\n",c);
        a = b;
        b = c;
        c = a + b;
        count=count-1;
    }
    return 0;
}
   