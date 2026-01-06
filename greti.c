#include <stdio.h>
// declaration prototype
void christianity();
void islam();
void hinduism();
int main()
{
    /*program to print the greeting according to the user*/
    char f;
    printf("please enter your faith between christianity (c), islam (i), hinduism (h) :");
    if (scanf("%c", &f) != 1)
    {
        printf("invalid entry\n");
        return 1;
    }
    if (f == 'c')
    {
        christianity();
    }
    else if (f == 'i')
    {
        islam();
    }
   else if (f == 'h')
    {
        hinduism();
    }
    else {
        printf("invalid entery");
    }
    return 0;
}
// function definition
void christianity()
{
    printf("god bless you\n");
}
void islam()
{
    printf("as-salaam-alaikum\n");
}
void hinduism()
{
    printf("namaste\n");
}
