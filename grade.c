#include<stdio.h>
int main()
{// program to calculate your grade on base of marks 
    int marks;
    char grade;
    printf("enter the marks:");
    scanf("%d",&marks);
    if(marks>100 || marks<0){
        printf("invalid marks!");
    }else if(marks>=81){
        grade='A';
    }else if(marks>=61){
        grade='B';
    }else if(marks>=51){
        grade='C';
    }else if(marks>=40){
        grade='D';
    }else if(marks>=33){
        grade='E';
    }else if(marks<=32){
        grade='F';
    }if(marks>=0 && marks<=100){
        printf("enter marks is %d and the grade is %c",marks,grade);
    }return 0;
}
