#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0;

    printf("\nEnter the 10 grades:\n");

    int i;
    
    for ( i=0; i<count ; i++){
        printf("student %d -> ", i+1);
        scanf("%d", &grades[i]);
        sum = sum + grades[i];
    }

    average = (float)sum/count;

    printf("\nThe average grade is %.2f\n", average);
    return 0;
}