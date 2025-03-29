#include <stdio.h>

#define MAX 1000

int read_line(char array_to_hold_strings[], int max_length);

int main()
{
    char line[MAX];
    char all_long_lines[MAX * 10];
    int length, index = 0;

    // Read lines until EOF (End Of File) is encountered
    while ((length = read_line(line, MAX)) > 0)
    {
        if (length > 80)
        {
            int i = 0;
            while (line[i] != '\0' && index < (MAX * 10 - 1))
            {
                all_long_lines[index++] = line[i++];
            }
            all_long_lines[index++] = '\n';
        }
    }

    all_long_lines[index] = '\0';

    // Print all stored long lines at the end
    if (index > 0)
    {
        printf("\nLines longer than 80 characters:\n%s", all_long_lines);
    }

    return 0;
}

// Function to read a line from input and return its length
int read_line(char array_to_hold_strings[], int max_length)
{
    int current_char, i; current_char = 0;

    // Read characters until max_length is reached, EOF is encountered, or newline is found
    for (i = 0; (i < max_length - 1) && ((current_char = getchar()) != EOF) && current_char != '\n'; i++)
    {
        array_to_hold_strings[i] = current_char;
    }

    // If newline character is read, store it as well
    if (current_char == '\n')
    {
        array_to_hold_strings[i] = current_char;
        ++i;
    }

    array_to_hold_strings[i] = '\0';
    return i - 1;
}
