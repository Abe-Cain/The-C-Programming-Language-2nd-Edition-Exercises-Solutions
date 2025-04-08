#include <stdio.h>

int any(char s1[], const char s2[]);

int main()
{
    char s1[] = "abcdefg";
    char s2[] = "zfg";
    int result = any(s1, s2);
    printf("First match location: %d\n", result);
    return 0;
}

int any(char s1[], const char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }

    return -1;
}
