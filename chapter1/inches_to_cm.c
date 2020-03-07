#include <stdio.h>

double inches_to_cm(double x);

int main(void)
{
    printf("Please enter the inches in double: ");
    double num_in_inches = 0.0;
    double num_in_cm = 0.0;
    scanf("%lf", &num_in_inches);
    num_in_cm = inches_to_cm(num_in_inches);
    printf("\n%lf inches = %lf cm\n", num_in_inches, num_in_cm);

    return 0;
}

double inches_to_cm(double x)
{
    double y = 0.0;
    y = x * 2.54;
    return y;
}