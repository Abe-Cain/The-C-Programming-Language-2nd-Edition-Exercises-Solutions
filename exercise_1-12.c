/*Exercise 1-12. Write a program that prints its input one word per line*/

#include <stdio.h>

int main()
{
    int chars, inside_word;

    // Initialize variables: 
    // chars will hold the current character
    // inside_word will track whether we are inside a word (1) or not (0)
    chars = inside_word = 0;

    // Read characters from input until EOF
    while ((chars = getchar()) != EOF)
    {
        // Check if the character is a space, tab, or newline (word delimiter)
        if (chars == ' ' || chars == '\t' || chars == '\n')
        {
            // If we're inside a word, print a newline to separate words
            if (inside_word)
            {
                putchar('\n');
                inside_word = 0;
            }
        }
        else
        {
            // If the character is part of a word (not space, tab, or newline)
            putchar(chars);
            inside_word = 1;
        }
    }

    return 0;
}
