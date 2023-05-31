#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    printf("Please insert the length of the rectangle you want: ");
    scanf("%d", &length);

    for (int i=0; i<length ; i++)
    {
        for(int j=0 ; j<length ;j++)
        {
            if( i!=0 && i!=length-1 && j!=0 && j!=length-1){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}


/*

***
* *
***

****
*  *
*  *
****

*****
*   *
*   *
*   *
*****

*/