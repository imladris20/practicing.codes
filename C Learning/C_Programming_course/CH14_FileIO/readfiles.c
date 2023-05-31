#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char string[100];

    fp = fopen("file.txt","r");

    if(fp == NULL)
    {
        perror("Error in opening file.");
        return(-1);
    }

    if(fgets(string, 99, fp)!=NULL)
    {
        printf("%s",string);
    }

    fclose(fp);
    fp = NULL;
    return 0;

}