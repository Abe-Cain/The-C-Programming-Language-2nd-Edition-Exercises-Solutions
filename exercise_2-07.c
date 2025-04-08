#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main()
{
    unsigned x = 0b10101010;
    unsigned result = invert(x, 5, 3);
    printf("Result: %u\n", result);
    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    unsigned mask = ~(~0 << n);
    mask = mask << (p - n + 1);
    x = x ^ mask;

    return x;
}
