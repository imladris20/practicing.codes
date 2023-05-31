#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    enum Weekday {Mon, Tue, Wed, Thr, Fri, Sat, Sun};
    enum Weekday Today;

    printf("Type the day out: ");
    scanf("%d", &Today);

    switch(Today)
    {
        case Mon:
            printf("Today is Monday.");
            break;
        case Tue:
            printf("Today is Tuesday.");
            break;
        case Wed:
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