#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    printf("Please insert the length of the rectangle you want: ");
    scanf("%d", &length);

    for (int i=1; i<=length ; i++)
    {
        for(int j=1 ; j<=i ;j++)
        {
            if( i!=1 && i!=2 && i!=length && j!=1 && j!= i ){
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

*
**
***

*
**
* *
****

*
**
* *
*  *
*****

*
**
* *
*  *
*   *
******

*/