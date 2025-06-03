// File: 3a-arithmetic-operators.c
// Purpose: Demonstrates the use of basic arithmetic operators in C.
// Student: Brent Frias Belmonte

#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    // Perform basic arithmetic operations
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);     // Integer division
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);      // Remainder

    return 0;
}
