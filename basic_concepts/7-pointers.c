// File: 7-pointers.c
// Purpose: Demonstrates basic pointer usage in C to access and modify a variable.
// Student: Brent Frias Belmonte

#include <stdio.h>  // Preprocessor directive for standard input/output

int main() {
    int number = 42;          // Initialize an integer variable
    int *ptr = &number;       // Declare a pointer variable that stores the address of 'number'

    // Print the value of 'number' using the variable and the pointer
    printf("Value of number: %d\n", number);       // Direct access
    printf("Value via pointer: %d\n", *ptr);       // Indirect access through pointer

    // Modify the value of 'number' using the pointer
    *ptr = 100;

    // Print the modified value
    printf("Modified value of number: %d\n", number);

    return 0; // Exit status of the program
}
