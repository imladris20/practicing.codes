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

        // �g���U���o�@�q�A�|�o�{�ڥ��N���ݭn��for�j��Aj���s�b�O���ݭn��
        // �]���u��j��dice�۵��~�|���ʧ@
        /*
        for (int j = 1 ; j < 7 ; j++)
        {
            if (dice == j)
            {
                count[j-1]++;
            }
        }*/

        // ��switch���]�ন�\�A����ĳ���n��
        // �]���L�L�k�ܦn�ĤJ�j��]�w�ح��A���M�L���T�|��������
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