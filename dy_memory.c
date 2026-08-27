#include <stdio.h>
#include <stdlib.h>

// Program to understand Dynamic Memory Allocation (DMA) in C
/* Dynamic Memory Allocation allows us to allocate memory
   during program execution.
Main functions:
   1. malloc()  -> allocates memory
   2. calloc()  -> allocates memory and initializes it to 0
   3. realloc() -> changes the size of previously allocated memory
   4. free()    -> releases dynamically allocated memory */

int main()
{
    // 1. malloc() - Memory Allocation

    printf("Size of float = %zu bytes\n\n", sizeof(float));

    int *ptr;

    // Allocate memory for 5 integers
    // sizeof(int) gives the size of one integer
    ptr = (int *)malloc(5 * sizeof(int));

    // Always check whether memory was allocated successfully
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Store values in dynamically allocated memory
    ptr[0] = 1;
    ptr[1] = 7;
    ptr[2] = 10;
    ptr[3] = 20;
    ptr[4] = 30;

    printf("Values using malloc():\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // Release the memory allocated by malloc()
    free(ptr);

    // ptr is no longer pointing to valid allocated memory
    // So we set it to NULL for safety
    ptr = NULL;

    // 2. calloc() - Continuous Allocation

    int n;

    printf("\nEnter number of integers: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    // calloc() takes TWO arguments:
    // calloc(number_of_elements, size_of_each_element)

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // calloc() initializes allocated memory to 0
    printf("\nValues after calloc():\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // Release calloc() memory
    free(ptr);
    ptr = NULL;

    // 3. realloc() - Resize Allocated Memory

    // First allocate memory for 3 integers
    ptr = (int *)calloc(3, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter 3 numbers:\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("\nNumbers before realloc():\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ptr[i]);
    }

    // Increase memory from 3 integers to 5 integers

    int *temp;

    temp = (int *)realloc(ptr, 5 * sizeof(int));

    // Always check realloc() result before replacing ptr
    if (temp == NULL)
    {
        printf("\nMemory reallocation failed!\n");

        // Original ptr is still valid if realloc() failed
        free(ptr);

        return 1;
    }

    ptr = temp;

    printf("\n\nEnter 2 more numbers:\n");

    for (int i = 3; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("\nAll 5 numbers after realloc():\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    // 4. free() - Release Memory

    free(ptr);
    ptr = NULL;

    printf("\nDynamic memory released successfully.\n");

    return 0;
}