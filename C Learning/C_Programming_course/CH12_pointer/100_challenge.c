#include <stdio.h>
#include <stdlib.h>

void square(int *x);

int main(void)
{
    int num = 12;

    square(&num);

    printf("The square of given number is: %d.", num);

    return 0;
}

void square(int *x)
{
    *x = (*x)*(*x);
}

