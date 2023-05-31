#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// The following is the method implemented using a 2-dimensional array.
// I am implementing 3x3 grid with random number from 1-9.
// To guarantee the number won't be repeated, we use ¥æ´«ªk

int main()
{
    srand(time(0));

    int grid[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int k=0;

    for ( int i = 0 ; i < 3 ; i++)
    {
        int number, row, column, temp;

        for (int j = 0 ; j < 3 ; j++)
        {
            number = rand()%(9-k) + k;
            row = number/3;
            column = number%3;
            
            temp = grid[i][j];
            grid[i][j] = grid[row][column];
            grid[row][column] = temp;

            k++;
        }
    }

    for ( int i = 0 ; i < 3 ; i++)                
    {                                        
        for (int j = 0 ; j < 3 ; j++)               
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}