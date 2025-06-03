// File: 2-if-elif-else.c
// Purpose: Categorizes a number as positive, negative, or zero using if, else if, else.
// Student: Brent Frias Belmonte

#include <stdio.h>  // For printf and scanf

int main() {
    int number;

    // Ask the student to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Categorize the number
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
