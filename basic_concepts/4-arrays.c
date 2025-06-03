// File: 4-arrays.c
// Purpose: Demonstrates how to declare, initialize, and access arrays in C.
// Student: Brent Frias Belmonte

#include <stdio.h>

int main() {
    // Declare and initialize an array of integers with 5 elements
    int numbers[5] = {10, 20, 30, 40, 50};

    // Display the values stored in the array using a loop
    printf("The values in the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    // Modify an element in the array
    numbers[2] = 99;  // Change the third element from 30 to 99

    // Display the updated array
    printf("\nAfter updating index 2:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}
