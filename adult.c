#include<stdio.h>
int main()
{
    //program to the statue according to age
    int a;
    printf("enter the age:");
    scanf("%d",&a);
    //condition
    if(a>=18){
        printf("adult");
    /*if you wanna put more candition then use else if 
    which can continue till you have condition*/
    }else if(a<18 && a>10){
        printf("teenager");
    }else{printf("chid");
    }
    return 0;
}