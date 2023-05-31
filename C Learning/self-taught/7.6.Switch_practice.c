#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ageOrder;

    printf("Please insert the age order of TWICE: ");
    scanf("%d", &ageOrder);

    switch(ageOrder)
    {
        case 1:
            printf("Nayeon");
            break;
        case 2:
            printf("Jeongyeon");
            break;
        case 3:
            printf("Momo");
            break;
        case 4:
            printf("Sana");
            break;
        case 5:
            printf("Jihyo");
            break;
        case 6:
            printf("Mina");
            break;
        case 7:
            printf("Dahyun");
            break;
        case 8:
            printf("Chaeyeong");
            break;
        case 9:
            printf("Tzuyu");
            break;
        default:
            printf("TWICE is the best!");
    }
    return 0;
}