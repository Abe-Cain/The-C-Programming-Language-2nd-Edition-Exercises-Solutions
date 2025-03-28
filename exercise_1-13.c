#include <stdio.h>

#define STATE_IN 1
#define STATE_OUT 0
#define MAX_LENGTH 10

int main()
{
    int current_char;
    int state_in_out_of_word, word_length;
    state_in_out_of_word = STATE_OUT;
    word_length = 0;

    // Array to store the frequency of words of different lengths
    int array_to_hold_length[MAX_LENGTH + 1] = { 0 };

    // Reading input character by character
    while ((current_char = getchar()) != EOF)
    {
        // Checking if the character is a space, tab, or newline (word separator)
        if (current_char == '\t' || current_char == '\n' || current_char == ' ')
        {
            // If we were in a word, store the word length count
            if (state_in_out_of_word == STATE_IN)
            {
                if (word_length <= MAX_LENGTH)
                {
                    ++array_to_hold_length[word_length];
                }
                else
                {
                    ++array_to_hold_length[MAX_LENGTH];
                }
                word_length = 0;
                state_in_out_of_word = STATE_OUT;
            }
        }
        else
        {
            state_in_out_of_word = STATE_IN;
            ++word_length;
        }
    }

    // Handling the last word (if input does not end in a space, tab, or newline)
    if (state_in_out_of_word == STATE_IN)
    {
        if (word_length <= MAX_LENGTH)
        {
            ++array_to_hold_length[word_length];
        }
        else
        {
            ++array_to_hold_length[MAX_LENGTH];
        }
    }

    // Printing the Horizontal Histogram
    printf("__________ Horizontal Histogram __________\n\n");
    for (int i = 1; i <= MAX_LENGTH; i++)
    {
        printf("%2d | ", i);
        for (int j = 0; j < array_to_hold_length[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("__________________________________________\n\n");

    // Printing the Vertical Histogram
    printf("\n___________ Vertical Histogram ___________\n\n");

    // Finding the maximum count to determine the height of the histogram
    int max_count = 0;
    for (int i = 1; i <= MAX_LENGTH; ++i)
    {
        if (array_to_hold_length[i] > max_count)
            max_count = array_to_hold_length[i];
    }

    // Printing the vertical bars
    for (int i = max_count; i > 0; --i)
    {
        for (int j = 1; j <= MAX_LENGTH; ++j)
        {
            if (array_to_hold_length[j] >= i)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("____________________\n");

    // Printing the word lengths as labels at the bottom
    for (int j = 1; j <= MAX_LENGTH; ++j)
    {
        printf("%d ", j);
    }

    printf("\n\n__________________________________________\n\n");

    return 0;
}
