// File: 6a-strings-prompt.c
// Purpose: Demonstrates reading and printing a string entered by the user in C.
// Student: Brent Frias Belmonte

#include <stdio.h>  // Preprocessor directive for standard input/output

int main() {
    char name[50];  // Declare a character array to store user input

    // Prompt the user to enter their name
    printf("Enter your name: ");
    scanf("%49s", name);  // Read a string from the user (limit input to avoid overflow)

    // Print a personalized greeting message using the entered name
    printf("Hello, %s! Welcome to Computer Science!\n", name);

    return 0; // Exit status of the program
}
