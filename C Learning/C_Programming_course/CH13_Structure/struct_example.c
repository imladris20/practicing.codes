#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    struct date
    {
        int year;
        int month;
        int day;
    };

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->year = 1997;
    datePtr->month = 7;
    datePtr->day = 05;

    // (*datePtr).year == datePtr->year
    printf("Po Lien's birthday is %d/%d/%d.\n", datePtr->year, datePtr->month, datePtr->day);

    return 0;

}
