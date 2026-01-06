#include<stdio.h>
int percentage(int a,int b,int c){
   return (a+b+c)/3;
}
int main(){
    //progam to calculate my percentage
    int maths,science,sanskrit,total;
    printf("enter the marks:");
    scanf("%d%d%d",&maths,&science,&sanskrit);
    total=percentage(maths,science,sanskrit);
    printf("your percentage is: %d",total);
    return 0;
}