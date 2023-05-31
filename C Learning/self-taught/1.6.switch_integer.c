#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int int1 = 5;
    int int2 = 8;

    printf("Original integer1 is: %d.\n", int1);
    printf("Original integer2 is: %d.\n\n", int2);

    // normal way to switch
    int temp = int1;
    int1 = int2;
    int2 = temp;

    printf("Switched integer1 is: %d.\n", int1);
    printf("Switched integer2 is: %d.\n\n", int2);

    // better way to switch, without declaring one more integer.
    int1 = int1 + int2;
    int2 = int1 - int2;
    int1 = int1 - int2;

    printf("Switched integer1 is: %d.\n", int1);
    printf("Switched integer2 is: %d.\n\n", int2);

    // cool way to switch, by using XOR
    // int1 == 5  == 00000101
    // int2 == 8  == 00001000
    // 5^8     13 == 00001101
    int1 = int1^int2;
    int2 = int1^int2;
    int1 = int1^int2;

    printf("Switched integer1 is: %d.\n", int1);
    printf("Switched integer2 is: %d.\n\n", int2);

    return 0;

}