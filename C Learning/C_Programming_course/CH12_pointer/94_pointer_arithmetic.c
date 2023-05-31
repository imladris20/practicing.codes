#include <stdio.h>
#include <stdlib.h>

// always declare the function first
int arraySum (int *array, const int n);


int main(void)
{
    int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};

    printf("\nThe sum of array is %d.\n", arraySum(values,10));

    return 0;
}

// arraySum function with pointer
int arraySum (int *array, const int n)
{
    int sum = 0;
    int *const arrayEnd = array + n;

    for( ; array < arrayEnd ; ++array)
    {
        sum = sum + *array;
    }

    return sum;
}

/* same arraySum fuction but without pointer
int arraySum2(int array[], const int n)
{
    int sum2 = 0;
    int *ptr = NULL;
    int *const arrayEnd2 = array + n;

    for(ptr = &array[0] ; ptr < arrayEnd2 ; ++ptr)
    {
        sum2 += *ptr;
    }

    return sum2;
}
*/

// Compare two funciton, you could see why we use pointers as parameter inside of functions.
// Because using pointer is usually less code and more efficient.
