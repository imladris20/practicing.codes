#include <stdio.h>
#include <stdlib.h>

int main()
{
    char upper;
    printf("Please insert an \"upper\"case character: ");
    scanf("%c", &upper);

    while ( upper < 65 || upper > 90 )
    {
        printf("You insert invalid character!\n");
        printf("Please insert again: ");
        // 注意第二個scanf的%c前面要有空格，不然會讀取到上一次輸入的\n，以至於陷入無限迴圈
        scanf(" %c", &upper);
    }

    printf("\nYou insert: %c", upper);

    // a跟A的差距就是轉大小寫的固定差別
    printf("\n\nI transfer it to lowercase, which becomes: %c\n\n", upper+('a'-'A'));

    return 0;

}
