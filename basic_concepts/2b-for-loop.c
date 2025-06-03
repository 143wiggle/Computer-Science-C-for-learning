// File: 2b-for-loop.c
// Purpose: Demonstrates a for loop that repeats a motivational message 5 times.
// Student: Brent Frias Belmonte

#include <stdio.h>  // For printf

int main() {
    // Step 1: Repeat 5 times using a for loop
    for (int i = 1; i <= 5; i++) {
        printf("Round %d: Never give up, my lord!\n", i);
    }

    return 0;
}
