// File: 3d-logical-operators.c
// Purpose: Demonstrates the use of logical operators (AND, OR, NOT) in C.
// Student: Brent Frias Belmonte

#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    // Logical AND (&&): True only if both conditions are true
    if (a < b && b < c) {
        printf("Logical AND: Both conditions are true (a < b AND b < c)\n");
    } else {
        printf("Logical AND: One or both conditions are false\n");
    }

    // Logical OR (||): True if at least one condition is true
    if (a > b || b < c) {
        printf("Logical OR: At least one condition is true (a > b OR b < c)\n");
    } else {
        printf("Logical OR: Both conditions are false\n");
    }

    // Logical NOT (!): Reverses the result of a condition
    if (!(a > b)) {
        printf("Logical NOT: a is NOT greater than b, condition is true\n");
    } else {
        printf("Logical NOT: a is greater than b, condition is false\n");
    }

    return 0;
}
