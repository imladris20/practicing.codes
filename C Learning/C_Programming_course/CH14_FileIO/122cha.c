//This file is aim to convert tha txt to uppercase.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "file1.txt"

int main()
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char c = ' ';

    fp1 = fopen(FILENAME,"r");
    fp2 = fopen("temp.txt", "w");

    if ( fp1==NULL || fp2==NULL)
    {
        perror("Error in opening file");
        return(-1);
    }

    while( (c = fgetc(fp1)) != EOF )
    {
        // convert lower to upper
        if (islower(c))
        {
            c = c-32;
        }
        // copy the content of file1 after converting to temp file
        fputc(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    
    // rename temp to cover file1
    remove(FILENAME);
    rename("temp.txt", FILENAME);

    // remove the temp file
    remove("temp.txt");

    // must close the file first and then reopen again
    fp1 = fopen(FILENAME,"r");

    if ( fp1==NULL)
    {
        perror("Error in opening file");
        return(-1);
    }

    while( (c=fgetc(fp1)) != EOF )
    {
        printf("%c",c);
    }

    fclose(fp1);

    fp1 = NULL;
    fp2 = NULL;

    return 0;
    
}