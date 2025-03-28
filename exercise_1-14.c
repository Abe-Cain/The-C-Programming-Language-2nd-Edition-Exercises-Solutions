#include <stdio.h>

#define MAX_LENGTH 128
int main()
{
    // Declare an integer array to store frequency of characters
    int char_frequencies[MAX_LENGTH] = { 0 };
    int current_char;

    // Read characters until EOF (End of File) is encountered
    while ((current_char = getchar()) != EOF)
    {
        // Check if the character is within the valid ASCII range (32 to 126)
        if (current_char >= 32 && current_char <= 126)
        {
            char_frequencies[current_char]++;
        }
    }

    // Print the frequency of characters in a user-friendly way
    printf("Character Frequency:\n");
    for (int i = 32; i <= 126; ++i)
    {
        if (char_frequencies[i] > 0)
        {
            printf("'%c' | ", i);
            for (int j = 0; j < char_frequencies[i]; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
