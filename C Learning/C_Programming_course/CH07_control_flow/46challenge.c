#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define payrate 12.00
#define taxrate_1 0.15
#define taxrate_2 0.20
#define taxrate_3 0.25
#define overwork 40
#define ow_times 1.5

int main()
{
// just declaring variable
    double workhour = 0.0; 
    double grosspay = 0.0;
    double taxes = 0.0;
    double netpay = 0.0;
    
    printf("Please insert how many hours you work per week: ");
    scanf("%lf", &workhour);

//below is to calculate the grosspay
    grosspay = (workhour<=overwork)? workhour*payrate: overwork*payrate+(workhour-overwork)*(payrate*ow_times);

//below is to calculate the taxes
    if(grosspay<=300){
        taxes = 300.0*taxrate_1;
    }
    else if (grosspay<=450){
        taxes = 300.0*taxrate_1+150.0*taxrate_2;
    }
    else {
        taxes = 300.0*taxrate_1+150.0*taxrate_2+(grosspay-450.0)*taxrate_3;
    }

// calculate the netpay
    netpay = grosspay-taxes;

// display all calculation
    printf("\nYour gross pay is %.2lf dollars. \n", grosspay);
    printf("Your taxes is %.2lf dollars. \n", taxes);
    printf("Your netpay is %.2lf dollars. \n\n", netpay);

    printf("Program is done.");

    return 0;

}