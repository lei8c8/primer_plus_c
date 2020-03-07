// boolean.c
#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an int to be summed ");
    printf("(q to quit): ");
    input_is_good = (scanf("%ld", &num) == 1);

    while (input_is_good)
    {
        sum += num;
        printf("Please enter next int (q to quit): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    return 0;
}