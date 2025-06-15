// File: 03-odd-even-range-checker.c
// Purpose: Demonstrates the use of a for loop and modulo to check if numbers from 1 to N are odd or even.
// Student: Brent Frias Belmonte

#include <stdio.h>

int main() {
    int i, limit;

    // Mini-purpose and instructions to user
    printf("=== Odd or Even Checker ===\n");
    printf("This program checks if numbers from 1 up to N are odd or even.\n");
    printf("Enter a number (N) to define the range (1 to N): ");

    // Get the range limit
    scanf("%d", &limit);

    // Loop through 1 to N
    for (i = 1; i <= limit; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    return 0;
}
