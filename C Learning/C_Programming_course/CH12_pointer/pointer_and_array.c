#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LEN 10

int main(void)
{
    int arr[LEN] = {0};
    int *p = arr;

    printf("\n");
    
    for ( int i = 0 ; i<LEN ; i++)
    {
        printf("&arr[%d]: %p", i, &arr[i]);
        printf("\t\tpointer+%d: %p\n", i, p+i);

    }

    return 0;
}