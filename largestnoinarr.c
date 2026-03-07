#include <stdio.h>

// Program to print the largest no. in an array
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
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == x){
            printf("found it at this position %d",i);
        }
    }
    return 0;
}