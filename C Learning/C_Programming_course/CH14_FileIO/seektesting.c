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
    printf("璝砞﹚SEEK_END穎皌offset0ㄏノftell穦眔 %d\n\n", pos);

    fseek (fp, pos, SEEK_SET);
    c = fgetc(fp);
    printf("璝砞﹚SEEK_SET穎皌ftell眔计offset穦 %c\n\n", c);
    fseek (fp, pos-1, SEEK_SET);
    c = fgetc(fp);
    printf("璝砞﹚SEEK_SET穎皌ftell眔计搭1offset穦 %c\n\n", c);
    fseek (fp, pos-2, SEEK_SET);
    c = fgetc(fp);
    printf("璝砞﹚SEEK_SET穎皌ftell眔计搭2offset穦 %c\n\n", c);

    fseek(fp, 0, SEEK_SET);
    pos = ftell(fp);
    printf("璝砞﹚SEEK_SET穎皌offset0ㄏノftell穦眔 %d\n\n", pos);

    fseek (fp, pos, SEEK_SET);
    c = fgetc(fp);
    printf("璝砞﹚SEEK_SET穎皌ftell眔计offset穦 %c\n\n", c);

    fseek(fp, 1, SEEK_SET);
    pos = ftell(fp);
    printf("璝砞﹚SEEK_SET穎皌offset1ㄏノftell穦眔 %d\n\n", pos);

    fseek (fp, pos, SEEK_SET);
    c = fgetc(fp);
    printf("璝砞﹚SEEK_SET穎皌ftell眔计offset穦 %c\n\n", c);

    fseek(fp, 9, SEEK_SET);
    pos = ftell(fp);
    printf("璝砞﹚SEEK_SET穎皌offset9ㄏノftell穦眔 %d\n\n", pos);

    fseek (fp, pos, SEEK_SET);
    c = fgetc(fp);
    printf("璝砞﹚SEEK_SET穎皌ftell眔计offset穦 %c\n\n", c);

    fseek(fp, 10, SEEK_SET);
    pos = ftell(fp);
    printf("璝砞﹚SEEK_SET穎皌offset10ㄏノftell穦眔 %d\n\n", pos);

    fseek (fp, pos, SEEK_SET);
    c = fgetc(fp);
    printf("璝砞﹚SEEK_SET穎皌ftell眔计offset穦 %c\n\n", c);

    fclose(fp);
    fp = NULL;

    return 0;
}
