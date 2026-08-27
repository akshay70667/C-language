#include <stdio.h>
/* Program to understand file handling in c
NOTE fprintf and fscanf are used data type other then character*/
int main()
{
    FILE *fptr;
    fptr = fopen("c.txt", "r");
    if (fptr == NULL)
    {
        printf("file doesn't exist\n");
    }
    else
    {
        fclose(fptr);
    }
    fptr = fopen("c.txt", "r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fclose(fptr);
    fptr = fopen("c.txt", "a");
    fputc(' ',fptr);
    fputc('W',fptr);
    fputc('o',fptr);
    fputc('r',fptr);
    fputc('l',fptr);
    fputc('d',fptr);
    fputc('!',fptr);
    fclose(fptr);
    fptr = fopen("c.txt", "r");
    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}