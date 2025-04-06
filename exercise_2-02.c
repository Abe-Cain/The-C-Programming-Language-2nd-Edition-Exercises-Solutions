#include <stdio.h>

int main()
{
    char s[1000];
    int i = 0;
    int lim = 1000;
    int c = 0;

    while (i < lim - 1) 
    {
        c = getchar();

        if (c == '\n')
            break;
        if (c == EOF)
            break;

        s[i] = c;
        i++;
    }

    s[i] = '\0';
    printf("You entered: %s\n", s);

    return 0;
}
