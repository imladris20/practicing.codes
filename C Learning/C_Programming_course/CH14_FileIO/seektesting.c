#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TESTFILE "seektesting.txt"
//                inside is: 0123456789

int main()
{
    FILE *fp;
    char c;
    int pos;

    fp = fopen(TESTFILE,"r");

    fseek(fp, 0, SEEK_END);
    pos = ftell(fp);
    printf("�Y�]�wSEEK_END�f�toffset��0�A�A�ϥ�ftell�A�|�o��G %d\n\n", pos);

    fseek (fp, pos, SEEK_SET);
    c = fgetc(fp);
    printf("�Y�]�wSEEK_SET�f�tftell�o�쪺�Ʀr��offset�A�|�L�X�G %c\n\n", c);
    fseek (fp, pos-1, SEEK_SET);
    c = fgetc(fp);
    printf("�Y�]�wSEEK_SET�f�tftell�o�쪺�Ʀr��1��offset�A�|�L�X�G %c\n\n", c);
    fseek (fp, pos-2, SEEK_SET);
    c = fgetc(fp);
    printf("�Y�]�wSEEK_SET�f�tftell�o�쪺�Ʀr��2��offset�A�|�L�X�G %c\n\n", c);

    fseek(fp, 0, SEEK_SET);
    pos = ftell(fp);
    printf("�Y�]�wSEEK_SET�f�toffset��0�A�A�ϥ�ftell�A�|�o��G %d\n\n", pos);

    fseek (fp, pos, SEEK_SET);
    c = fgetc(fp);
    printf("�Y�]�wSEEK_SET�f�tftell�o�쪺�Ʀr��offset�A�|�L�X�G %c\n\n", c);

    fseek(fp, 1, SEEK_SET);
    pos = ftell(fp);
    printf("�Y�]�wSEEK_SET�f�toffset��1�A�A�ϥ�ftell�A�|�o��G %d\n\n", pos);

    fseek (fp, pos, SEEK_SET);
    c = fgetc(fp);
    printf("�Y�]�wSEEK_SET�f�tftell�o�쪺�Ʀr��offset�A�|�L�X�G %c\n\n", c);

    fseek(fp, 9, SEEK_SET);
    pos = ftell(fp);
    printf("�Y�]�wSEEK_SET�f�toffset��9�A�A�ϥ�ftell�A�|�o��G %d\n\n", pos);

    fseek (fp, pos, SEEK_SET);
    c = fgetc(fp);
    printf("�Y�]�wSEEK_SET�f�tftell�o�쪺�Ʀr��offset�A�|�L�X�G %c\n\n", c);

    fseek(fp, 10, SEEK_SET);
    pos = ftell(fp);
    printf("�Y�]�wSEEK_SET�f�toffset��10�A�A�ϥ�ftell�A�|�o��G %d\n\n", pos);

    fseek (fp, pos, SEEK_SET);
    c = fgetc(fp);
    printf("�Y�]�wSEEK_SET�f�tftell�o�쪺�Ʀr��offset�A�|�L�X�G %c\n\n", c);

    fclose(fp);
    fp = NULL;

    return 0;
}
