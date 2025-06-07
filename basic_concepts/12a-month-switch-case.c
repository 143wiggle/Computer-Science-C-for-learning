// File: 12a-month-switch-case.c  
// Purpose: Uses a switch statement to display the name of the month based on user input (1–12).  
// Student: Brent Frias Belmonte  

#include <stdio.h>  // Preprocessor directive for standard input/output functions

int main() {
    int month;

    // Prompt the user to enter a number corresponding to a month
    printf("Enter month number (1-12): ");
    scanf("%d", &month);  // Read the user's input

    // Determine the month name using a switch-case structure
    switch(month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            // Display an error message for invalid input
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;  // Exit status of the program
}
