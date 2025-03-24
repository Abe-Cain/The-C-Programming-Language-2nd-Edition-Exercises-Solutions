/*Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.*/

#include <stdio.h>

int main() {
    // Declare variables for the current and previous characters
    int current_char, previous_char = 0;

    //=====================================================================================================
    // First version using continue to skip consecutive spaces
    //=====================================================================================================
    // while ((current_char = getchar()) != EOF) {
    //     // Skip printing the space if the previous character was also a space
    //     if (current_char == ' ' && previous_char == ' ') {
    //         continue;
    //     }
    //
    //     // Print the current character
    //     putchar(current_char);
    //
    //     // Update the previous character
    //     previous_char = current_char;
    // }

    //=====================================================================================================
    // Second version using a conditional check to print the character only if it's not a space
    //=====================================================================================================
    while ((current_char = getchar()) != EOF) {
        // Print the current character if it is not a space, or if the previous character was not a space
        if (current_char != ' ' || previous_char != ' ') {
            putchar(current_char);
        }

        // Update the previous character
        previous_char = current_char;
    }

    return 0;
}
