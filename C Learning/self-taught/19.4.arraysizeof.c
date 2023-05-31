#include <stdio.h>
#include <stdlib.h>

void printsize(int arr[]);

int main()
{
    int test[4]={3,4,5,6};
    printsize(test);
    return 0;
}

void printsize(int arr[])
{
    printf("Size of int is:\t%zu\n", sizeof(int));
    printf("Size of test[0] is:\t%zu\n", sizeof(arr[0]));
    printf("Size of test array is:\t%zu\n", sizeof(arr));
    printf("Length of test array is:\t%zu\n", sizeof(arr)/sizeof(arr[0]));
}