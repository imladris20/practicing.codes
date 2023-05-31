#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    enum Weekday {Mon, Tue, Wed, Thr, Fri, Sat, Sun};
    enum Weekday Today;
    Today = Fri;


    switch(Today)
    {
        case Mon:
            printf("Today is Monday.");
            break;
        case Tue:
            printf("Today is Tuesday.");
            break;
            printf("Today is Wednesday.");
            break;
        case Thr:
            printf("Today is Thursday.");
            break;
        case Fri:
            printf("Today is Friday.");
            break;
        case Sat:
            printf("Today is Saturday.");
            break;
        case Sun:
            printf("Today is Sunday.");
            break;
        default:
            printf("\nIt's not exist.");
            break;
    }

}

