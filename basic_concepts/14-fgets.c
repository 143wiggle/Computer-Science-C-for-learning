// File: 14-fgets.c
// Purpose: Demonstrates how to safely read a full line of text using fgets in C.
// Student: Brent Frias Belmonte

#include <stdio.h>  // Preprocessor directive for standard input/output

int main() {
    char name[100];  // Declare a character array to store the user's input

    // Prompt the user to enter their full name
    printf("Enter your full name: ");

    // Use fgets to read a line of text including spaces
    fgets(name, sizeof(name), stdin);  // Reads up to 99 characters from standard input

    // Display the entered name
    printf("Hello, %s", name);  // No need for \n because fgets includes the newline

    return 0;  // Exit status of the program
}
