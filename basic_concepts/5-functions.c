// File: 5-functions.c
// Purpose: Demonstrates how to declare, define, and use functions in C.
// Student: Brent Frias Belmonte

#include <stdio.h>

// Step 1: Declare the function
int addNumbers(int a, int b);

int main() {
    int num1 = 10;
    int num2 = 5;
    
    // Step 2: Call the function and store the result
    int sum = addNumbers(num1, num2);

    // Step 3: Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

// Step 4: Define what the function does
int addNumbers(int a, int b) {
    return a + b;  // Return the sum of the two numbers
}
