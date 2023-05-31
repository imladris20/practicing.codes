#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    char *str = NULL;

    // initializing memory allocation
    str = (char *) malloc(15 * sizeof(char));
    strcpy(str, "Imladris");
    printf("String = %s\t\tAddress = %p\n\n", str, str);

    // reallocating memory
    str = (char *) realloc(str, 25 * sizeof(char));
    strcat(str,".com");
    printf("String = %s\t\tAddress = %p\n\n", str, str);

    //Always free the memory after finish what you want!!!!
    free(str);

    return 0;
}