#include<stdio.h>
int main()
{//simple program similar to grade.c
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    if(marks<0 || marks>100){
        printf("invailed marks");
    }else if(marks<30){
         printf("your grade is C");
             
    }else if(30<=marks && marks<70){
         printf("your grade is B");
        
    }else if(70<=marks && marks<90){
         printf("your grade is A");
    }else if(90<=marks && marks<100){
         printf("your grade is A+");
    }
    return 0;
    
}