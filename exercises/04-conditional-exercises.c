// File: 2c-char-grades-if-else.c
// Purpose: Takes a letter grade as input and prints supportive feedback using if-else statements.
// Student: Brent Frias Belmonte

#include <stdio.h>

int main() {
    char grade;

    printf("\nEnter a letter grade: ");
    scanf(" %c", &grade); // space before %c handles leftover newline

    if (grade == 'A') {
        printf("Perfect! Keep up the amazing work!\n");
    }
    else if (grade == 'B') {
        printf("Great job! You're doing really well.\n");
    }
    else if (grade == 'C') {
        printf("Good effort! Keep pushing forward.\n");
    }
    else if (grade == 'D') {
        printf("You're making progress, keep improving!\n");
    }
    else if (grade == 'F') {
        printf("Don't worry, every step is a step toward success. Keep trying!\n");
    }
    else {
        printf("Oops, that doesn't look like a valid grade. Please try again.\n");
    }

    return 0;
}
