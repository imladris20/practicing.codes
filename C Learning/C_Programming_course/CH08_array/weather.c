#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define months 12
#define years 5

int main(void)
{
    // initialize rainfall data of 2018-2022
    float weather[years][months] =
    {
        {2.5,4.2,3.6,5.9,2.9,5.6,4.8,7.6,1.3,10.3,56.3,12.4},               //2018 ---> 117.4
        {1.5,2.3,6.4,12.4,12.6,4.2,67.5,1.4,6.7,4.2,22.3,11.1},             //2019
        {88.2,34.3,1.7,45.9,20.3,90.5,39.6,48.8,20.8,1.3,2.8,5.6},          //2020
        {19.1,30.8,2.9,33.1,58.3,20.6,11.1,11.9,48.5,20.1,228.1,0.3},       //2021
        {98.1,9.3,5.9,1.9,8.3,5.3,9.1,1.9,9.7,0.9,0.3,0.2}                  //2022

    };

    // declaring variables.
    int i = 5;
    int j = 12;
    float sum = 0.0;
    float subtotal = 0.0;
    float total = 0.0;

    printf("Years\t\tRainfall (mm)\n");
    // calculate and show total rainfall of each year.
    for ( i=0 ; i < years ; i++)
    {
        sum = 0.0;
        for (j=0 ; j < months ; j++)
        {
            sum = sum + weather [i][j];
        }
        subtotal = subtotal + sum;
        printf("%d\t\t%.2f\n", i+2018, sum);
    }

    // calculate and show the average rainfall from 2018-2022
    printf("\nThe average rainfall of 2018-2022 is %.2f mm.\n", subtotal/years);

    // print the title
    printf("\nMonthly Averages:\n\nJan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n\n");

    // now calculate the average rainfall of each month.

    for ( i=0 ; i < months ; i++)
    {
        sum = 0.0;
        for ( j=0 ; j<years ; j++)
        {
            sum = sum + weather [j][i];
        }
        printf ("%.2f\t", sum/years);
    }

    printf("\n");
    return 0;

}