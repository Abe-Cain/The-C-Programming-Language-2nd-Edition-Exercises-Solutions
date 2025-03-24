/*Exercise 1-2. Experiment to find out what happens when prints's argument string contains \c, where c is some character not listed above.*/

#include <stdio.h>

int main() 
{
    // Invalid escape sequence example
    printf("hello,\c world\n");

    return 0;
}
