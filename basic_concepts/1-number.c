// File: 1-number.c
// Purpose: Takes a number input from the student and prints it back.
// Student: Brent Frias Belmonte

#include <stdio.h>  // For input and output functions

int main() {
    int number;  // Variable to store the input number

    printf("Enter a number: ");  // Ask the student to input a number
    scanf("%d", &number);        // Read and store the number

    // Print the entered number
    printf("You entered: %d\n", number);

    return 0;
}
