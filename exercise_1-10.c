/*Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.*/

#include <stdio.h>

int main() 
{
    int my_char;

    // Loop to read each character from input until EOF
    while ((my_char = getchar()) != EOF) 
    {
        // Check if the character is a tab and print the escape sequence
        if (my_char == '\t') 
        {
            putchar('\\');
            putchar('t');
        }
        // Check if the character is a backspace and print the escape sequence
        else if (my_char == '\b') 
        {
            putchar('\\');
            putchar('b');
        }
        // Check if the character is a backslash and print the escape sequence
        else if (my_char == '\\') 
        {
            putchar('\\');
            putchar('\\');
        }
        // Otherwise, print the character as is
        else 
        {
            putchar(my_char);
        }
    }

    return 0;
}
