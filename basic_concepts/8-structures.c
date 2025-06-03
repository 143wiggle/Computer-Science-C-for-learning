// File: 8-structures.c
// Purpose: Demonstrates defining and using a simple structure to group related data.
// Student: Brent Frias Belmonte

#include <stdio.h>  // Preprocessor directive for standard input/output

// Step 1: Define a structure named 'Student' with related fields
struct Student {
    int id;            // Student ID number
    char name[50];     // Student's name
    float grade;       // Student's grade
};

int main() {
    // Step 2: Create and initialize a variable 'student1' of type 'struct Student'
    struct Student student1 = {12345, "Brent Frias Belmonte", 89.5};

    // Step 3: Print the values stored in the structure fields
    printf("Student ID: %d\n", student1.id);           // Print ID
    printf("Student Name: %s\n", student1.name);       // Print Name
    printf("Student Grade: %.2f\n", student1.grade);   // Print Grade

    return 0;  // Exit status of the program
}
