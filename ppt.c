#include <stdio.h>
void square(int* n);
int main() {
    //pointer to pointer
    int num = 10;      // Normal variable
    int *ptr = &num;  
    int **pptr = &ptr;
    
    printf("Value of num: %d\n", num);
    printf("Value of **ptr: %d\n", **pptr);
    printf("Value of *ptr: %d\n", *ptr);
    square(&num);
    return 0;
    //pointer to function call
}
void square(int* n){
    *n=(*n)*(*n);
    printf("square = %d\n",*n);
}