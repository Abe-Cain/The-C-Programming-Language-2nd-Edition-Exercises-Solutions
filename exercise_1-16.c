#include <stdio.h>

#define MAX 2000

int read_line(char str[], int limit);
void print_line_length(int length);

int main() {
    char line[MAX];
    int lengths[MAX];
    int length, count = 0;

    // Read lines and store their lengths
    while ((length = read_line(line, MAX)) > 0) {
        lengths[count++] = length;
    }

    // Print all the lengths after processing all lines
    for (int i = 0; i < count; i++) {
        print_line_length(lengths[i] - 1);
    }

    return 0;
}

int read_line(char str[], int max_length_of_chars_in_line) {
    int current_char = 0;
    int i = 0;
    for (i = 0; (i < max_length_of_chars_in_line - 1) && ((current_char = getchar()) != EOF) && (current_char != '\n'); ++i) {
        str[i] = current_char;
    }

    if (current_char == '\n') {
        str[i] = current_char;
        ++i;
    }

    str[i] = '\0';
    return i;
}

void print_line_length(int length) {
    printf("Length: %d\n", length);
}
