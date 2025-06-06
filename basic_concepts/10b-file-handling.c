// File: 11-km-to-miles-converter.c
// Purpose: Converts distance from kilometers to miles using a simple formula.
// Student: Brent Frias Belmonte

#include <stdio.h>  // Include standard input/output library

int main() {
    float kilometers, miles;                   // Variables to store input and result
    const float conversion_factor = 0.621371;  // Constant to convert km to miles

    // Prompt user to enter distance in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);  // Read the input from the user

    // Calculate miles by multiplying kilometers by the conversion factor
    miles = kilometers * conversion_factor;

    // Display the result with 2 decimal places
    printf("%.2f kilometers is equal to %.2f miles.\n", kilometers, miles);

    return 0;  // Indicate that the program ended successfully
}
