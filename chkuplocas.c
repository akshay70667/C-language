#include<stdio.h>
int main()
{//program to check if the entered character is upper case or lower case
    char letter;
    printf("enter the character:");
    scanf("%c",&letter);
    if(letter>='A' && letter<='Z'){
        printf("upper case letter");
    }else if(letter>='a' && letter<='z'){
         printf("lower case letter");
    }else{
         printf("invalid chararter");
    }
    return 0;
    
}