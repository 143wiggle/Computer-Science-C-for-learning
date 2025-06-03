#include <stdio.h>  // This lets us use printf

// Step 1: Tell the computer that a function called greet exists
void greet();

int main() {
    // Step 2: Call the greet function
    greet();

    return 0;
}

// Step 3: Here's what the greet function does
void greet() {
    printf("Hello, Computer Science!\n");  // It prints a message
}
