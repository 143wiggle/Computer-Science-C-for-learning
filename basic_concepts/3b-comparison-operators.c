// File: 3b-comparison-operators.c
// Purpose: Demonstrates how to use comparison operators in C to compare values.
// Student: Brent Frias Belmonte

#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    // Comparison results (0 = false, 1 = true)
    printf("x == y: %d\n", x == y);   // Equal to
    printf("x != y: %d\n", x != y);   // Not equal to
    printf("x > y: %d\n", x > y);     // Greater than
    printf("x < y: %d\n", x < y);     // Less than
    printf("x >= y: %d\n", x >= y);   // Greater than or equal to
    printf("x <= y: %d\n", x <= y);   // Less than or equal to

    return 0;
}
