#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void multiplyTwoNumbers (int x, int y)
{

    int result = x*y;
    printf("The product of %d multiplied by %d is %d.\n\n", x, y, result);

}

int main (void)
{
    multiplyTwoNumbers (20,15);
    multiplyTwoNumbers (114,3);
    multiplyTwoNumbers (33,15);

    return 0;

}