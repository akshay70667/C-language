#include <stdio.h>
void work(int a,int b, int *sum, int* pro, int* avg){
    *sum=a+b;
    *pro=a*b;
    *avg=(a+b)/2;
}
int main(){
    int a,b,sum,pro,avg;
    printf("enter the value :");
    scanf("%d%d",&a,&b);
    work(a,b,&sum,&pro,&avg);
    printf("sum = %d, product = %d, average = %d",sum,pro,avg);
    return 0;
}