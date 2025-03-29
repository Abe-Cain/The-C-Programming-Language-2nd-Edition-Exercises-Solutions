#include <stdio.h>

#define MAX 1000

int read_line(char line[], int limit);
void reverse(char line[], int length);

int main(void)
{
    char line[MAX];
    int limit = MAX;

    int length = read_line(line, limit);

    reverse(line, length);

    printf("Reversed line: %s\n", line);
    return 0;
}

int read_line(char line[], int limit)
{
    int c, i = 0;
    while (i < limit - 1 && (c = getchar()) != EOF && c != '\n') {
        line[i++] = c;
    }
    if (c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}

void reverse(char line[], int length)
{
    int start = 0;
    int end = length - 2;

    // Swap characters from both ends of the string
    while (start < end) {
        char temp = line[start];
        line[start] = line[end];
        line[end] = temp;
        start++;
        end--;
    }
}
