#include <stdio.h>

#define MAX 1024
#define COLUMN_LIMIT 40

char line[MAX];
int get_line(void);
int length;

int main() 
{
    while ((length = get_line()) > 0) 
    {
        int column = 0, last_break = 0;

        for (int i = 0; i < length; i++) 
        {
            if (line[i] == ' ' || line[i] == '\t') 
            {
                last_break = i;
            }

            if (column >= COLUMN_LIMIT && last_break != 0) 
            {
                line[last_break] = '\n';
                column = i - last_break;
                last_break = 0;
            }

            putchar(line[i]);
            column++;

            if (line[i] == '\n') 
            {
                column = 0;
                last_break = 0;
            }
        }
    }
    return 0;
}

int get_line(void) 
{
    int current_char, i = 0;

    while (i < MAX - 1 && (current_char = getchar()) != EOF && current_char != '\n') 
    {
        line[i] = current_char;
        i++;
    }

    if (current_char == '\n') 
    {
        line[i] = current_char;
        i++;
    }

    line[i] = '\0';

    return i;
}
