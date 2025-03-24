//Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. 

#include <stdio.h>

int main() 
{
    int value;

    // Read a character and check if it is NOT EOF
    value = (getchar() != EOF);

    // Print the result (1 if input is not EOF, 0 if EOF is encountered)
    printf("Value: %d\n", value);

    return 0;
}
