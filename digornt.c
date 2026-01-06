#include <stdio.h>
int main()
{
    //program to check given character is digit or not
    char b;
    //promoting the user to enter a character
    printf("enter the character :");
    scanf(" %c",&b);
    /*logical formula to check if the character is a digit
      single quotation ensure that 0 and 9 are read as character and separately
       its value come from ascii */
    int a=(b>='0' && b<='9');
    //final statement line
    printf("(1 means yes a digit while 0 means not a digit\n)");
    printf(" answer is :%d",a);
    return 0;
}