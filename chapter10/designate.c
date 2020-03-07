// designate.c -- use designated initializers
#include <stdio.h>
#define MONTH 12

int main(void)
{
    int days[MONTH] = {31, 28, [4] = 31, 30, 31, [1] = 29};

    for (int i = 0; i < MONTH; i++)
        printf("%2d %d \n", i + 1, days[i]);

    return 0;
}