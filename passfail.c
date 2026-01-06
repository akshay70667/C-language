#include <stdio.h>
int main()
{
    //program to check pass & fail
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    //condition
     if(marks>35 && marks<=100) {
         printf("pass");
     }
     else if(marks>100){
         printf("invailed marks");
     }else{
         printf("fail");
     }
    return 0;
}