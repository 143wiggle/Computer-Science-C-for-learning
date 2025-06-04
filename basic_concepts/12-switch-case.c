// File: 12-switch-case.c
// Purpose: Demonstrates the use of switch-case in C to handle multiple conditions.
// Student: Brent Frias Belmonte

#include <stdio.h>  // Preprocessor directive for standard input/output

int main() {
    int day;

    // Ask the user to enter a number representing the day of the week
    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);  // Get input from the user

    // Use switch-case to print the name of the day
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;  // Exit status of the program
}
