#include <stdio.h>
#include <stddef.h>   // for ptrdiff_t
// pointer arithematic
int main() {
    
    int age = 22;
    int *ptr = &age;

    int _age = 23;
    int *_ptr = &_age;

    printf("Value of age: %d\n", age);

    printf("Pointer ptr stores: %p\n", (void *)ptr);

    ptr++;   // pointer arithmetic

    printf("After increment, ptr stores: %p\n", (void *)ptr);

    ptrdiff_t diff = ptr - _ptr;
    printf("Difference between pointers: %td\n", diff);

    return 0;
}
