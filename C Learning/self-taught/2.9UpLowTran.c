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
        // �`�N�ĤG��scanf��%c�e���n���Ů�A���M�|Ū����W�@����J��\n�A�H�ܩ󳴤J�L���j��
        scanf(" %c", &upper);
    }

    printf("\nYou insert: %c", upper);

    // a��A���t�Z�N�O��j�p�g���T�w�t�O
    printf("\n\nI transfer it to lowercase, which becomes: %c\n\n", upper+('a'-'A'));

    return 0;

}
