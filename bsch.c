#include <stdio.h>
// program for binary search...
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int lp = 0, up = 4, mid, item, f = 0;
    printf("enter the searching item:");
    scanf("%d", &item);
    while (lp <= up)
    {
        mid = (lp + up) / 2;
        if (a[mid] == item)
        {
            f = 1;
            break;
        }
        if (a[mid] < item)
        {
            lp = mid + 1;
        }
        else
        {
            up = mid - 1;
        }
    }
    if (f == 1)
    {
        printf("item found at %d", mid);
    }
    else
    {
        printf("item not found");
    }
}