// File: 9-memory-management.c
// Purpose: Demonstrates dynamic memory allocation using malloc and free in C.
// Student: Brent Frias Belmonte

#include <stdio.h>   // Preprocessor directive for standard input/output
#include <stdlib.h>  // Required for malloc and free

int main() {
    int *numbers;   // Pointer to hold the address of dynamically allocated memory
    int count;

    // Step 1: Ask the user how many integers they want to store
    printf("How many numbers do you want to enter? ");
    scanf("%d", &count);

    // Step 2: Dynamically allocate memory for the specified number of integers
    numbers = (int *)malloc(count * sizeof(int));  // Allocate memory

    // Step 3: Check if memory allocation was successful
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit with error code
    }

    // Step 4: Read numbers from the user
    for (int i = 0; i < count; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Step 5: Display the numbers entered
    printf("You entered:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Step 6: Free the allocated memory
    free(numbers);  // Deallocate memory to prevent memory leak

    return 0;  // Exit status of the program
}
