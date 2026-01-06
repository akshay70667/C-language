#include <stdio.h>
int main()
{
    //type of operators
    int a,b,c,d,e,f,g;
    printf("enter value of no.a,b,f:");
   // value input
    scanf("%d %d %d",&a, &b, &f);
    //arithmetic +,-,*,/,%
    c=a+b;
    //relational ==,>,>=,<,<=,!= true is 1, false 0
    d=a==b;
    //logical &&,||,!
    e=!(9<4||1>3);
    //note precendence !>ar>re>lo
    //assignment =,+=,-=,*=,/=,%=
    a=+b;//same as a=a+b
    printf(" %d \n %d\n %d\n %d\n",c,d,e,a);
    //ternary ?,:
    f >= 18 ? printf("adult") : printf("child");
    return 0;
}