//Exercise 1-8. Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main() {
    // Declare variables to store counts of blanks, tabs, newlines, and the current character
    int number_of_blanks, number_of_tabs, number_of_newlines, c;

    // Initialize counts to zero
    number_of_blanks = 0;
    number_of_newlines = 0;
    number_of_tabs = 0;
    c = 0;

    // Loop to read each character from input until EOF (End Of File)
    while ((c = getchar()) != EOF) {
        // Check if the character is a newline
        if (c == '\n') {
            ++number_of_newlines;
        }

        // Check if the character is a tab
        if (c == '\t') {
            ++number_of_tabs;
        }

        // Check if the character is a blank space
        if (c == ' ') {
            ++number_of_blanks;
        }
    }

    // Print the counts of tabs, blanks, and newlines
    printf("tabs: %d, blanks: %d, newlines: %d\n", number_of_tabs, number_of_blanks, number_of_newlines);

    return 0;
}
