// �ĤG�ؼg�k����iŪ�ʸ��n�A���M���i�����C�@�I�A���Ĥ@�ؤ]�S���֦h�֡A�ӥB�|�����s��B���
// �e���ɶq�H�iŪ�ʬ��u���A����ɶq�H����t�׬��u���h���@��l�X
// ���iŪ�ʻP�Ĳv���@�w�����A�Ҧp�ĤT�ؼg�k�N�O��̳�����

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // first way to write.
    printf("H     H     A   \nH     H    A A  \nHHHHHHH   A   A \nH     H  AAAAAAA\nH     H  A     A\n\n\n");

    // second way to write the same display.
    printf("H     H     A   \n");
    printf("H     H    A A  \n");
    printf("HHHHHHH   A   A \n");
    printf("H     H  AAAAAAA\n");
    printf("H     H  A     A\n\n\n");

    // perfect way to write the display.
    printf("H     H     A   \n"
           "H     H    A A  \n"
           "HHHHHHH   A   A \n"
           "H     H  AAAAAAA\n"
           "H     H  A     A\n\n\n");    

    return 0;
}

