// File: 16-char-array.c
// Purpose: Demonstrates how to declare and work with character arrays in C.
// Student: Brent Frias Belmonte

#include <stdio.h>  // Preprocessor directive for standard input/output

int main() {
    // Declare a character array and assign it a word (note: space for null terminator '\0')
    char word[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // Print the word using %s which expects a null-terminated character array
    printf("The word is: %s\n", word);

    // Print each character individually
    printf("Characters in the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Character %d: %c\n", i, word[i]);
    }

    return 0;  // Exit status of the program
}
