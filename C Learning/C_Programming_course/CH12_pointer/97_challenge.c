#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int strLength(const char *string);

int main(void)
{
    printf("The length of \"Twice is the best\" is: %d.\n", strLength("Twice is the best"));
    printf("The length of \"Cardinal is so lame\" is: %d.\n", strLength("Cardinal is so lame"));
    printf("The length of \"Jordan Hicks sucks.\" is: %d.\n", strLength("Jordan Hicks sucks."));

    return 0;
}

int strLength(const char *string)
{
    const char *strEnd = string;

    while (*strEnd)
    {
        ++strEnd;
    }

    return strEnd-string;

}