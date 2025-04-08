#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
    unsigned x = 0b10101010;
    unsigned y = 0b1100;
    unsigned result = setbits(x, 5, 3, y);
    printf("Result: %u\n", result);
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned mask = ~(~0 << n);
    unsigned y_bits = (y & mask);
    y_bits = y_bits << (p - n + 1);

    mask = ~(~0 << n) << (p - n + 1);
    x = x & ~mask;
    x = x | y_bits;

    return x;
}
