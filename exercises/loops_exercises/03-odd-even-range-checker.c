// File: 03-odd-even-range-checker.c
// Purpose: Demonstrates the use of a for loop and modulo to check if numbers from 1 to N are odd or even.
// Student: Brent Frias Belmonte

#include <stdio.h>

int main() {
    int i, limit;

    printf("Enter the value of N: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    return 0;
}
