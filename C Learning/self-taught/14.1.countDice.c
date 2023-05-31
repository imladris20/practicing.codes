#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int dice;
    int count[6]={0};

    for ( int i=0 ; i<6000 ; i++)
    {
        dice = rand()%6 + 1;
        count[dice-1]++;

        // 寫完下面這一段你會發現根本就不需要用for迴圈，j的存在是不需要的
        // 因為只有j跟dice相等才會有動作
        /*
        for (int j = 1 ; j < 7 ; j++)
        {
            if (dice == j)
            {
                count[j-1]++;
            }
        }*/

        // 用switch當成也能成功，但建議不要用
        // 因為他無法很好融入迴圈設定裏面，雖然他的確會執行比較快
        /*
        switch(dice)
        {
            case 1:
                count[0]= count[0]+1;
                break;
            case 2:
                count[1]= count[1]+1;
                break;
            case 3:
                count[2]= count[2]+1;
                break;
            case 4:
                count[3]= count[3]+1;
                break;
            case 5:
                count[4]= count[4]+1;
                break;
            case 6:
                count[5]= count[5]+1;
                break;
        }
        */
    }

    for ( int i=0 ; i<6 ; i++)
    {
        printf("%d: %d\n", i+1, count[i]);
    }

    return 0;

}