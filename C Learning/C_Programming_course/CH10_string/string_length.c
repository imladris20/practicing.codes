#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{
    char str1[100] ="���P���]�k��";
    char str2[] ="���@���k�Ӫ��������n�n��";
    char str3[] ="���]�V�Q���H�i��";

    char copy[10];

    unsigned int count = 0;

    // count the size of str1 without using function

    while (str1[count] != '\0')
    {
        count++;
    }
    printf("The length of the string \"%s\" is %d characters.\n\n", str1, count);

    //reset the count to calculate next string
    count = 0;

    while (str2[count] != '\0')
    {
        count++;
    }
    printf("The length of the string \"%s\" is %d characters.\n\n", str2, count);

    // with function.

    printf("The length of the string \"%s\" is %d characters. \n\n", str1, strlen(str1));

    // practice copy
    strncpy(copy, str3, sizeof(copy)-1);

    printf("The string copy is \"%s\".\n\n", copy);

    //practice concatenate.

    printf("The concatenation of str1 and str2 is: \n");
    printf("%s\n", strcat(str1, str2));

    return 0;

}
