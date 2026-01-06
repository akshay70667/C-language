#include <stdio.h>
int count;
int seq(int count, int a, int b, int c);
int main()
{
    printf("enter the n term till which you want to print the series :");
    scanf("%d", &count);

    int a = 0, b = 1, c = 1;
    printf("%d%d\n",a, b);
    seq(count, a, b, c);
}
int seq(int count, int a, int b, int c)
{
    for (int i = 0; i < count; i++)
    {
    printf("%d\n",c);
        a = b;
        b = c;
        c = a + b;
        count=count-1;
        int seq(int count, int a, int b, int c);
    }
    return 0;
}
