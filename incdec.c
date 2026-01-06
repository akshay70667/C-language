#include<stdio.h>
int main()
{//progam to understand increment and decrement with post and pre
    int i=1;
    //post | use then change | pre value(print) | post value
    printf("%d\n",i++);// 1|2
    printf("%d\n",i--);// 2|1
    //pre | change then use | pre vlaue | post value(print)
    printf("%d\n",++i);// 1|2
    printf("%d\n",--i);// 2|1
    return 0;
}