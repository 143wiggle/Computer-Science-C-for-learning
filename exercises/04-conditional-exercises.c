// File: 2c-char-grades-if-else.c
// Purpose: Takes a letter grade as input and prints feedback using if-else statements.
// Student: Brent Frias Belmonte

#include <stdio.h>

int main() {
    char grade;

    printf("\nEnter a letter grade: ");
    scanf(" %c", &grade); // space before %c handles leftover newline

    if (grade == 'A') {
        printf("Perfect!\n");
    }
    else if (grade == 'B') {
        printf("You did good!\n");
    }
    else if (grade == 'C') {
        printf("You did okay.\n");
    }
    else if (grade == 'D') {
        printf("At least it's not an F.\n");
    }
    else if (grade == 'F') {
        printf("You failed.\n");
    }
    else {
        printf("Invalid grade entered.\n");
    }

    return 0;
}
