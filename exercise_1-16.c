#include <stdio.h>

// A function to store a string and calculate its length
int get_line(char array_to_hold_string[], int maximum_string_length);
void copy(char to[], char from[]);

#define MAX_LINE 1000

void main(void)
{
    char line[MAX_LINE];         
    char longest_array[MAX_LINE];
    int len;                     
    int max = 0;                 

    while ((len = get_line(line, MAX_LINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest_array, line); // Copy current longest line to longest_array
        }
    }
    
    if (max > 0) {
        printf("Longest line: %s", longest_array); // Print the longest line
    }

    return 0;
}

// Function to get a line of input
int get_line(char char_string[], int lim)
{
    int current_char;
    int index;

    // Read characters until we reach the limit, EOF, or a newline character
    for (index = 0; index < lim - 1 && ((current_char = getchar()) != EOF) && current_char != '\n'; ++index) {
        char_string[index] = current_char;
    }

    // If the character is a newline, include it in the array
    if (current_char == '\n') {
        char_string[index] = current_char;
        ++index;
    }

    // Null-terminate the string
    char_string[index] = '\0';

    return index;
}

// Function to copy the string from one array to another
void copy(char to[], char from[])
{
    int index = 0;
    // Copy each character from 'from' to 'to' until the null character is encountered
    while ((to[index] = from[index]) != '\0') {
        ++index;
    }
}
