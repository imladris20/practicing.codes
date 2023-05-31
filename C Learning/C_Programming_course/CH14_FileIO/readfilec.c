#include <stdio.h>
#include <stdlib.h>

// this is used to read single character.

int main()
{
    FILE *fp;
    char c;

    fp = fopen("file.txt","r");

    if(fp == NULL){
        perror("Error in opening file.");
        return(-1);
    }

    while((c = fgetc(fp))!= EOF)
    {
        printf("%c",c);
    }

    fclose(fp);
    fp = NULL;
    return(0);

}// return from main