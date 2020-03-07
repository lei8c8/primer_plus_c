// ptr_opt.c -- pointer operations
#include <stdio.h>

int main(void)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;

    ptr1 = urn; // assign an address to a pointer
    ptr2 = &urn[2]; 

    return 0;

}