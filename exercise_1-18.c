#include <stdio.h>

#define MAX 1000

int read_line(char line[], int limit);
int remove_trailing_whitespace(char line[]);

int main() {
    char line[MAX];
    int length;

    while ((length = read_line(line, MAX)) > 0) {
        length = remove_trailing_whitespace(line);
        if (length > 0) {
            printf("%s\n", line);
        }
    }

    return 0;
}

int read_line(char line[], int limit) {
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

int remove_trailing_whitespace(char line[]) {
    int i;
    for (i = 0; line[i] != '\0'; i++);
    i--;
    while (i >= 0 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')) {
        i--;
    }
    if (i >= 0) {
        line[i + 1] = '\0';
        return i + 1;
    }
    else {
        line[0] = '\0';
        return 0;
    }
}
