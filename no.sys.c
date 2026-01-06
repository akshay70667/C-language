#include <stdio.h>
int main()
{
    //program to check if no enter is positive or negative with even ,odd too
    int no_;
    printf("enter the no_:");
    scanf("%d",&no_);
    //condition for positive ,negative then for even ,odd respectively
    if(no_>0){
        printf("%d is positive no.",no_);
        if(no_%2==0){
            printf(" and even no.");
        }else{
            printf(" and odd no.");
    }}else{
        printf("%d is negative no.",no_);
        if(no_%2==0){
            printf(" and even no.");
        }else{
            printf(" and odd no.");
    }}return 0;
}