// File: 2d-break-continue.c
// Purpose: Demonstrates the use of break and continue inside a loop.
// Student: Brent Frias Belmonte

#include <stdio.h>

int main() {
    // Step 1: Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {

        // Step 2: Skip number 5 using 'continue'
        if (i == 5) {
            continue; // Skip printing 5
        }

        // Step 3: Stop the loop at 8 using 'break'
        if (i == 8) {
            break; // Exit loop when i is 8
        }

        // Print current number
        printf("i = %d\n", i);
    }

    return 0;
}
