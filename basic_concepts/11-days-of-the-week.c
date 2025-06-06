// File: 11-days-of-the-week.c
// Purpose: Displays the name of the day based on user input (1-7) using switch-case, with option to exit.
// Student: Brent Frias Belmonte

#include <stdio.h>  // Include standard input/output library

int main() {
    int day;  // Variable to store user's input for day number

    // Loop until user enters 0 to exit
    do {
        // Prompt user to enter a day number or 0 to exit
        printf("\nEnter a number (1-7) for the day of the week, or 0 to exit: ");
        scanf("%d", &day);  // Read user input

        // Use switch-case to print the day name or handle exit/invalid input
        switch(day) {
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
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                // Handle invalid numbers outside 0-7
                printf("Invalid number. Please enter 1-7, or 0 to exit.\n");
        }
    } while(day != 0);  // Continue looping until user chooses to exit

    return 0;  // End of program
}

