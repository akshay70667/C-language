#include <stdio.h>

// Pointer to Pointer demonstration

int main()
{
    int a;
    int b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    int *ptrA = &a;         // pointer to a
    int *ptrB = &b;         // pointer to b
    int **ptrToPtrA = &ptrA;  // pointer to pointer to a

    printf("\n--- VALUES ---\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    printf("Value using ptrA (*ptrA): %d\n", *ptrA);
    printf("Value using ptrB (*ptrB): %d\n", *ptrB);

    printf("Value using ptrToPtrA (**ptrToPtrA): %d\n", **ptrToPtrA);

    printf("\n--- ADDRESSES ---\n");

    printf("Address of a (&a): %p\n", (void *)&a);
    printf("Address stored in ptrA: %p\n", (void *)ptrA);
    printf("Address of ptrA (&ptrA): %p\n", (void *)&ptrA);

    printf("\nAddress stored in ptrToPtrA: %p\n", (void *)ptrToPtrA);
    printf("Address of ptrToPtrA (&ptrToPtrA): %p\n", (void *)&ptrToPtrA);

    return 0;
}