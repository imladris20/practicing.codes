#include <stdio.h>
#include <stdlib.h>
#define LEN 5

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int len = *(&arr + 1) - arr;
    int *p = arr;

    printf("\n");

    for(int i = 0; i < LEN; i++)
    {
        printf("&arr[%d]: %p", i ,&arr[i]);
        printf("\t\tpointer + %d: %p\n", i, p + i);
    }


    printf("\n\nThe address of arr is:\t\t%p\n", arr);
    printf("The address of &arr is:\t\t%p\n", &arr);
    printf("You cound see the address of arr and &arr are the same.\n\n");

    printf("The address of &arr+1 is:\t%p\n", &arr+1);
    printf("You should see that the address of &arr+1 is same as the next address after arr.\n");

    printf("Therefore you could calculate length of the array by \"*(arr+1)-arr)\"\n");
    printf("So the length of the arr would be: %d\n", len);

    return 0;
}
