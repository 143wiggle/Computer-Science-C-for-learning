// File: 13-nested-loops.c
// Purpose: Demonstrates the use of nested loops in C by printing a multiplication table.
// Student: Brent Frias Belmonte

#include <stdio.h>  // Preprocessor directive for standard input/output

int main() {
    // Outer loop: Controls the rows (1 to 5)
    for (int i = 1; i <= 5; i++) {
        // Inner loop: Controls the columns (1 to 5)
        for (int j = 1; j <= 5; j++) {
            // Print the product of i and j with spacing
            printf("%2d ", i * j);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;  // Exit status of the program
}
