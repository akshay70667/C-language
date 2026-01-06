#include <stdio.h>
// declaration prototype
void Hello();
void Bye();
int main()
{
    /*program to explain function */
    Hello(); // function call
    Bye();
    return 0;
}
// function definition
void Hello()
{
    printf("hello!\n");
    printf("my name is Akshay\n");
}
void Bye()
{
    printf("goodbye:)\n");
}
