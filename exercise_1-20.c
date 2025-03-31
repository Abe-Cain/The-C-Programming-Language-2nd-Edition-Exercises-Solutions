#include <stdio.h>

#define MAX 1024
#define SPACE_STEPS 4

char line[MAX];
int get_line(void);
int length;

int main() 
{
    while ((length = get_line()) > 0) 
    {
        int column = 0;

        for (int i = 0; i < length; i++) 
        {
            if (line[i] == '\t') 
            {
                // Calculate how many spaces to print to reach the next tab stop
                int tabs_count = SPACE_STEPS - (column % SPACE_STEPS);
                for (int j = 0; j < tabs_count; j++) 
                {
                    putchar(' ');
                    column++;
                }
            }
            else {
                putchar(line[i]);
                column++;
            }
        }
    }
    return 0;
}

int get_line(void) 
{
    extern char line[];
    int current_char, i = 0;

    // Read characters until we reach the max size, EOF, or newline
    while (i < MAX - 1 && (current_char = getchar()) != EOF && current_char != '\n') 
    {
        line[i] = current_char;
        i++;
    }

    // If we encountered a newline, add it to the line
    if (current_char == '\n') 
    {
        line[i] = current_char;
        i++;
    }

    // Null-terminate the string
    line[i] = '\0';

    return i;
}
