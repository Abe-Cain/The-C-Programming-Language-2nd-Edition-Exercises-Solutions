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
        int space_count = 0, column = 0;

        for (int i = 0; i < length; i++) 
        {
            if (line[i] == ' ') 
            {
                space_count++;
                column++;
                if (column % SPACE_STEPS == 0) 
                {
                    putchar('\t');
                    space_count = 0;
                }
            } 
            else 
            {
                while (space_count > 0) 
                {
                    putchar(' ');
                    space_count--;
                }
                putchar(line[i]);
                column++;
                if (line[i] == '\n') 
                {
                    column = 0;
                }
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
