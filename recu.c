#include <stdio.h>
// declaration prototype
void Hello();
int main()
{
    /*program to explain recursive function */
    int count;
    printf("enter the no you want to call function :");
    scanf("%d",&count);
    Hello(count); // function call
    return 0;
}
// function definition
void Hello(int count)
{
    if(count==0){
        return;
    }
    printf("hello!\n");
    printf("my name is Akshay\n");
    Hello(count-1);
}

