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
            // dice = rand(); --> �u�g�o�˷|������ɶ����w�A�i��ܤ[�B�i��ܪ�
            dice = rand()%6 + 1;    // �o�˼g����ɶ��|�������B�֫ܦh
                                    // ���n�`�N�]��rand���W���ڭ̤����D
                                    // �]�����H6���l�ƥi��ʤ]���O����������
        }while( dice<1 || dice>6);
        printf("%d\n", dice);
    }

    return 0;
}