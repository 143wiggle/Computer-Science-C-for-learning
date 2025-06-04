// File: 15-do-while.c
// Purpose: Demonstrates the use of a do-while loop in C, which executes the loop body at least once.
// Student: Brent Frias Belmonte

#include <stdio.h>  // Preprocessor directive for standard input/output

int main() {
    int number;

    // This loop will always run at least once
    do {
        // Ask the user to enter a number
        printf("Enter a number (0 to quit): ");
        scanf("%d", &number);

        // Print the entered number (unless it's 0)
        if (number != 0) {
            printf("You entered: %d\n", number);
        }

    } while (number != 0);  // Keep looping until the user enters 0

    return 0;  // Exit status of the program
}
