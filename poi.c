#include <stdio.h>

int main() {
    int num = 10;      // Normal variable
    int *ptr = &num;   // Pointer storing the address of 'num' ,
    // data type will depened on what type of data is stored in pointer
    int _num = *ptr;
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);   // %p prints memory address
    printf("Pointer ptr stores: %p\n", ptr); 
    printf("Pointer ptr stores: %u\n", ptr); //%u is use for unsigned int
    printf("Value at address stored in ptr: %d\n", *ptr);  // Dereferencing
    printf("address of ptr : %u\n", &ptr); //showing that num and ptr are storeded at different address
    printf("Value of new value using address stored in ptr: %d\n", _num); 
    printf("value of this opration %d\n",*(&num));
    int a;
    ptr=&a;
    *ptr =0;
    printf("Value of a: %d\n", a);
    printf("Value of *ptr: %d\n", *ptr);
    return 0;
    // *ptr means value &ptr means address
}