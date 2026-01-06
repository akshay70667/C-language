#include <stdio.h>
//call by refrence
//simple to swap 2 numbers
void swap(int* a,int* b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("a = %d , b = %d",*a ,*b);
    return;
}
int main(){
    int num1 , num2;
    printf("Enter a number: ");
    scanf("%d%d", &num1,&num2);
    printf("a = %d , b = %d\n",num1 ,num2);
    swap(&num1,&num2);
    return 0;
}