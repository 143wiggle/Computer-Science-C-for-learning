// File: 10-file-handling.c
// Purpose: Demonstrates basic file handling in C (writing to and reading from a file).
// Student: Brent Frias Belmonte

#include <stdio.h>  // Preprocessor directive for standard input/output

int main() {
    FILE *filePtr;  // File pointer to manage the file

    // Step 1: Open a file for writing ("w" mode). If the file doesn't exist, it will be created.
    filePtr = fopen("sample.txt", "w");

    // Step 2: Check if the file was opened successfully
    if (filePtr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;  // Exit with error code
    }

    // Step 3: Write a message to the file
    fprintf(filePtr, "Hello, Computer Science File Handling!\n");

    // Step 4: Close the file after writing
    fclose(filePtr);

    // Step 5: Open the same file again, this time for reading ("r" mode)
    filePtr = fopen("sample.txt", "r");

    // Step 6: Check if the file was opened successfully
    if (filePtr == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    // Step 7: Read and display the content of the file character by character
    char ch;
    printf("File content:\n");
    while ((ch = fgetc(filePtr)) != EOF) {
        putchar(ch);  // Print each character
    }

    // Step 8: Close the file after reading
    fclose(filePtr);

    return 0;  // Exit status of the program
}
