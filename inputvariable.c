#include <stdio.h>
int main()
{
    //program to input variables
    int no;
    //4 bytes
    printf("enter the no.");
    //scanf is to input variable on the time of run
    scanf("%d",&no);
    char star = '*';
    //1 bytes, can only contain 1 character
    float pi = 3.14;
    //4 bytes
    double pi_ =3.141592;
    //8 bytes
    //display the variables
    printf("no is %d\n char is %c\n pi value is %.2f\n pi value with more digit %lf",no,star,pi,pi_);
    return 0;
}