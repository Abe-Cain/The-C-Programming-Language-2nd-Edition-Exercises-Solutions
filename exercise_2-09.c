#include <stdio.h>

int bitcount(unsigned x)
{
    int count = 0;
    while (x != 0)
    {
        x &= (x - 1);
        count++;
    }
    return count;
}

int main()
{
    unsigned x = 29;
    printf("Number of 1-bits: %d\n", bitcount(x));
    return 0;
}
