#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TESTFILE "testingReverse.txt"

int main()
{
    FILE *fp;
    char c;
    int pos;
    int success;
    int i=0;

    fp = fopen(TESTFILE,"r");

    if (fp == NULL)
    {
        perror("Error in opening file.");
        return -1;
    }

    // 使游標直接跳到最後一個字元
    fseek(fp, 0, SEEK_END);
    success = fseek(fp, 0, SEEK_END);

    // 確認是否搜尋成功
    if(success == 0){
        printf("fseek success.\n\n");
    }else{
        printf("fseek failed.\n\n");
    }

    // 用ftell找出目前游標位置(因為fseek已經跑到最後)
    // pos 得到的是最後一個字元的位置
    pos = ftell(fp);
    printf("The cursor is at %d position.\n\n",pos);

    printf("And the reserved content will be:\n\n");

    while(i<pos)
    {
        fseek (fp, i, SEEK_SET); 
        c = fgetc(fp);
        printf("%c", c);
        i++;
    }

    // 開始從最後一個字依序輸出，變成倒過來
    for ( ; pos>=0 ; pos--)
    {
        // 從頭開始 seek 1個字元代表會到第2個字元，所以想從最後一個字元開始seek，就要先減1
        fseek (fp, pos-1, SEEK_SET); 
        c = fgetc(fp);
        printf("%c", c);
    }

    // 尚待解決：為什麼反過來輸出卻會多換一行?

    fclose(fp);
    fp = NULL;

    return 0;
}