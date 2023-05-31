#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int i;

    for (i=0; i<12; i++){
        printf("Month %d has %d days.\n", i+1, month[i]);
    }

    return 0;
}
