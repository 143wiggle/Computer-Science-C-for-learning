// Student: Brent Frias Belmonte
// File: 0-hello-world-function-call.c
// Description: Basic C program using a function call with user input to display a personalized greeting message.

#include <stdio.h>  // This lets us use printf and scanf

// Step 1: Tell the computer that a function called greetUser exists
void greetUser(char name[]);

int main() {
    char name[50];  // This stores the student's name

    printf("Enter your name: ");  // Ask the student to type their name
    scanf("%s", name);  // Save the typed name into the 'name' variable

    // Step 2: Call the greetUser function and give it the name
    greetUser(name);

    return 0;
}

// Step 3: Here's what the greetUser function does
void greetUser(char name[]) {
    printf("Hello, %s! Welcome to Computer Science!\n", name);  // It prints a personalized greeting
}
