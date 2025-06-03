// File: 2a-while-loop.c
// Purpose: Demonstrates a while loop that counts from 1 to 5.
// Student: Brent Frias Belmonte

#include <stdio.h>  // For printf

int main() {
    int count = 1;  // Start counting from 1

    // Step 1: Repeat while count is less than or equal to 5
    while (count <= 5) {
        printf("Step %d: Keep walking, my lord!\n", count);
        count++;  // Move to the next number
    }

    return 0;
}
