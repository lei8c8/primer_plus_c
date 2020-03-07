/* bases.c -- prints 100 in decimal, octal and hex */
#include <stdio.h>

int main(void)
{
    int number = 100;

    printf("dec = %d, octal = %o, hex = %x\n", number, number, number);
    printf("dec = %d, octal = %#o, hex = %#x\n", number, number, number);

    getchar();
    return 0;
}