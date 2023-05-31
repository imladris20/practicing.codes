#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int total = 0;

    while( total == 0 || num!= 0)
    {

        printf("Please enter the number(if 0, it will quit):  ");
        scanf("%d",&num);
        printf("You insert: %d\n\n", num);
        total = total + num;

    }

    printf("\nThe total summation of the numbers you insert: %d\n", total);

    return 0;

}
