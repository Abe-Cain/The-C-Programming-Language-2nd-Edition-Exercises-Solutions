#include <stdio.h>

#define MAX 1024

char line[MAX];
int get_line(void);
int length;

int main() 
{
    int paren = 0, brackets = 0, braces = 0;
    int in_string = 0, in_char = 0, in_comment = 0;

    while ((length = get_line()) > 0) 
    {
        for (int i = 0; i < length; i++) 
        {
            if (!in_string && !in_char && line[i] == '/' && line[i + 1] == '*') 
            {
                in_comment = 1;
                i++;
            } 
            else if (in_comment && line[i] == '*' && line[i + 1] == '/') 
            {
                in_comment = 0;
                i++;
            } 
            else if (!in_comment) 
            {
                if (line[i] == '"' && line[i - 1] != '\\') 
                {
                    in_string = !in_string;
                } 
                else if (line[i] == '\'' && line[i - 1] != '\\') 
                {
                    in_char = !in_char;
                }

                if (!in_string && !in_char) 
                {
                    if (line[i] == '(') paren++;
                    else if (line[i] == ')') paren--;
                    else if (line[i] == '[') brackets++;
                    else if (line[i] == ']') brackets--;
                    else if (line[i] == '{') braces++;
                    else if (line[i] == '}') braces--;
                }
            }
        }
    }

    if (paren != 0) printf("Unmatched parentheses\n");
    if (brackets != 0) printf("Unmatched brackets\n");
    if (braces != 0) printf("Unmatched braces\n");

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
