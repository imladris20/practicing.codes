#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    int limitation = 0;
    char *text = NULL;

    printf("Enter the limitation of the string: ");
    scanf("%d", &limitation);

    text = (char *) malloc ( limitation * sizeof(char));

    if (text != NULL)
    {
        printf("Enter the string: ");
        scanf("%s",text);
        printf("You inputted: %s\n", text);

    }

    free(text);
    text = NULL;

    return 0;

}