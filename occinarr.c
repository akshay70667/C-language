#include <stdio.h>

// Program to find how many times does a number "x" occurs in qn array
int main()
{

    int a[10];
    int x;

    printf("Enter 10 array elements:\n");

    // Input loop
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nelements to be searched:\n");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == x){
            count++;
        }
    }
    printf("%d occurs %d times",x,count);
    return 0;
}