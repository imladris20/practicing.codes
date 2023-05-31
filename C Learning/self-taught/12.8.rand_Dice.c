#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int dice;
    for (int i=1 ; i<=5 ; i++)
    {
        do{
            // dice = rand(); --> 只寫這樣會讓執行時間不定，可能很久、可能很長
            dice = rand()%6 + 1;    // 這樣寫執行時間會比較接近、快很多
                                    // 但要注意因為rand的上限我們不知道
                                    // 因此除以6的餘數可能性也不是完全平均的
        }while( dice<1 || dice>6);
        printf("%d\n", dice);
    }

    return 0;
}