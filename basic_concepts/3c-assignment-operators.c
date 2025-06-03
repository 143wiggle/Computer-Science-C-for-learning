// File: 3c-assignment-operators.c
// Purpose: Demonstrates how to manually update variable values using assignment.
// Student: Brent Frias Belmonte

#include <stdio.h>

int main() {
    int a = 10;

    printf("Initial value of a: %d\n", a);

    // Update a by adding 5
    a = a + 5;
    printf("After a = a + 5: %d\n", a);

    // Update a by subtracting 3
    a = a - 3;
    printf("After a = a - 3: %d\n", a);

    // Update a by multiplying by 2
    a = a * 2;
    printf("After a = a * 2: %d\n", a);

    // Update a by dividing by 4
    a = a / 4;
    printf("After a = a / 4: %d\n", a);

    // Update a with remainder of division by 3
    a = a % 3;
    printf("After a = a %% 3: %d\n", a);  // Note: %% prints the % symbol

    return 0;
}
