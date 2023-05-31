#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str1[20], str2[20], str3[20];
    int year;
    
    fp = fopen("file1.txt","w+");
    if (fp != NULL)
        fputs("Hello how are 203903", fp);
    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read string1: %s\n", str1);
    printf("Read string2: %s\n", str2);
    printf("Read string3: %s\n", str3);
    printf("Read integer: %d\n", year);

    fclose(fp);

    return 0;
}