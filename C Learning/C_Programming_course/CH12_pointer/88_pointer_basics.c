#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    // declaration and initialization.
    int cards = 0;
    int *pointer = NULL;

    // show the information of normal integer variable.
    cards = 20;
    printf("\nThe address of the variable \"cards\" is : %p\n", &cards);
    printf("The value of the varialble \"cards\" is : %d\n\n\n", cards);

    // dereference cards to the pointer
    pointer = &cards;

    // show the information of pointer variable.
    printf("Pointer's address: %p\n", &pointer);
    printf("Pointer's size: %d bytes\n", sizeof(pointer));
    printf("Pointer's itself value: %p (should be the address of cards)\n", pointer);
    printf("The value of pointer points to: %d (should be the value of cards)\n\n", *pointer);

    return 0;
}