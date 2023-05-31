#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("file3.txt", "w+");

    fputs("I am Imladris Lin.\n", fp);
    fputs("What's your name?", fp);

    fclose(fp);

    return 0;
    
}