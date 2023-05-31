#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount = 0;

    printf("please insert how many asterik you want: ");
    scanf("%d", &amount);

    printf("\n\n");
    for( int i=0 ; i<amount ; i++)
    {
        printf("*");
    }

    printf("\n\n");
    return 0;
}
