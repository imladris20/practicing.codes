#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Please insert a number: ");
    scanf("%d",&number);
    printf("\nOK. I will tell you all positive divisor of %d.\n", number);

    printf("\nAll divisors of %d are: ", number);

    for ( int i = 1 ; i<number ; i++)
    {
        if(number%i==0)
        {
            printf("%d, ",i);
        }
    }

    printf("%d\n",number);

    return 0;

}
