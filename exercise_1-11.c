/*Exercise 1-11: How would you test the word count program? What kinds of input are most likely to uncover bugs, if any?*/

/*
1. Input with multiple consecutive spaces or tabs
   This will check if the program correctly handles multiple spaces or tabs between words without incorrectly counting extra words.

2. Input with no words (only spaces, tabs, or newlines)
   This will test whether the program correctly handles situations where there are no words to count and ensures it doesn't falsely count words in empty input.

3. Input with multiple newline characters
   This will help you verify if the program correctly handles and counts newlines separately without affecting word or character counting.

4. Input with words containing numbers and punctuation
   Words with numbers and punctuation (e.g., "hello123", "good!morning") should be tested to ensure the program recognizes them as single words, even if they contain non-alphabetic characters.
*/
