// pound.c -- defines a funcion with argument
#include <stdio.h>
void pound(int x);

int main(void)
{
    int times = 5;
    char ch = '!'; // ASCII code is 33
    float f = 6.0;

    pound(times);
    pound(ch);
    pound((int) f); // cast float to int
    return 0;
}

void pound(int n)
{
    while (n-- >0)
        printf("#");
    printf("\n");
}