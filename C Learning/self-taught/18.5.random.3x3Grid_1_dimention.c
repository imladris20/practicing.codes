#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// The following is the method implemented using a 1-dimensional array.
// I am implementing 3x3 grid with random number from 1-9.
// To guarantee the number won't be repeated, we use ¥æ´«ªk

int main()
{
    srand(time(0));

    int grid[9] = {1,2,3,4,5,6,7,8,9};
    int k=0;

    // the benefit of using one dimention array is without using nested loop
    for ( int i = 0 ; i < 9 ; i++)
    {
        int number, row, column, temp;
        number = rand()%(9-k) + k;

        temp = grid[i];
        grid[i] = grid[number];
        grid[number] = temp;
        k++;
    }

    // however, you need to think about how to implement line break to make it looks like 3x3 grid
    for ( int i = 0 ; i < 9 ; i++)
    {
        printf("%d ", grid[i]);

        if (i % 3 == 2 && i>1)
        {
            printf("\n");
        }
    }

    return 0;
}
