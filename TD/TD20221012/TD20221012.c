#include <stdio.h>

int main(int argc, char const *argv[])
{
    // const char a = 8;
    // a = a / 2;

    unsigned char x = 0x12;
    unsigned char y = 0xFC;

    printf("x & y = %X\n", x & y);
    printf("x | y = %X\n", x | y);
    printf("x ^ y = %X\n", x ^ y);
    printf("INV(x)= %X\n", ~x);
    printf("INV(y)= %X\n", ~y);

    return 0;
}
