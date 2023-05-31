#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Please insert the number for label 1~5\n");
    int label[6]={0};
    int id;

    for (int i=1 ; i <= 5 ; i++)
    {
        printf("Label %d: ", i);
        scanf("%d", &label[i]);
    }

    printf("\n\n");

    while(true)
    {
        printf("Please insert which label you want to search: ");
        scanf("%d", &id);
        if( id>5 || id<1){
            printf("Invalid Label!! Searching End.");
            break;
        }
        printf("%d\n\n", label[id]);
    }

    return 0;
}
