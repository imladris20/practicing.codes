#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int total = 0;
    int count = 0;

    while( count == 0 || num != 0)
    {

        printf("Please enter the number(if 0, it will quit):  ");
        scanf("%d",&num);
        if (num != 0){
            printf("You insert: %d\n\n", num);
            count ++;
            total = total + num;
        }else if(num ==0 && count ==0){
            count = -1;
        }
    }

    printf("\nThe total summation of the numbers you inserted: %d\n", total);

    if(total==0 & num==0){
        printf("\nThe average is N/A.\n");
    }else{
        printf("\nThe average of the numbers you inserted: %.2f\n", (float)total/(count));
    }

    return 0;

}
