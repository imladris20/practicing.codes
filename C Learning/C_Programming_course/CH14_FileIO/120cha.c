#include <stdio.h>
#include <stdlib.h>
#define FILENAME "file.txt"

int main()
{
    FILE *fp = NULL;
    int count = 0;
    char c;

    fp = fopen(FILENAME,"r");

    if(fp==NULL)
    {
        perror("Error in opening file.");
        return(-1);
    }

    printf("\nBelow you could see the content of the file: \n\n\n");
    while((c = fgetc(fp))!=EOF)
    {
        printf("%c",c);
        if ( c == '\n' )
        {
            count = count + 1 ;
        };
    }

    fclose(fp);
    fp = NULL;

    printf("\n\nThere are %d lines in the flie.\n", count);
}