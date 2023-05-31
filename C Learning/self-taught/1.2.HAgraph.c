// 第二種寫法明顯可讀性較好，雖然有可能比較慢一點，但第一種也沒有快多少，而且會很難編輯、更改
// 前期盡量以可讀性為優先，後期盡量以執行速度為優先去維護原始碼
// 但可讀性與效率不一定互斥，例如第三種寫法就是兩者都滿足

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

