// File: 5a-functions-prompt.c
// Purpose: Demonstrates functions with user input in C.
// Student: Brent Frias Belmonte

#include <stdio.h>

// Step 1: Declare the function that adds two numbers
int addNumbers(int a, int b);

int main() {
    int num1, num2;

    // Step 2: Ask the user to enter the first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Step 3: Ask the user to enter the second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Step 4: Call the function to add numbers and store the result
    int sum = addNumbers(num1, num2);

    // Step 5: Display the sum
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

// Step 6: Define the function to add two numbers
int addNumbers(int a, int b) {
    return a + b;  // Return the sum
}
