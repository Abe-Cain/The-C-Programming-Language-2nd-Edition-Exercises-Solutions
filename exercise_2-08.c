#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main()
{
    unsigned x = 0b10101010;
    unsigned result = rightrot(x, 3);
    printf("Result: %u\n", result);
    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    unsigned bitsize = sizeof(x) * 8;
    n = n % bitsize;
    return (x >> n) | (x << (bitsize - n));
}
