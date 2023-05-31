#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <stdbool.h>

// declare the function to count the number of the characters in the string.
int stringLength(const char string[]);
// declare the function to concatenate strings.
void concat(char result[], const char str1[], const char str2[]);
// declare the function to compare if two strings are equal.
bool equalStrings(const char strx[], const char stry[]);

int main()
{
    const char myString[] = "I love \"Uncle from another world\" ";
    const char myString2[] = "and also \"Suisei no Majo\".";
    char yourString[100];
    char yourString2[100];
    char result[100];

    printf("\nMy string1 is \"%s\".\n", myString);
    printf("\nMy string2 is \"%s\".\n\n", myString2);

    // function 1
    printf("\nThe length of my string 1 is %d characters.\n", stringLength(myString));
    printf("\nThe length of my string 2 is %d characters.\n", stringLength(myString2));

    // function 2
    concat(result, myString, myString2);
    printf("\n%s\n", result);

    // function 3
    printf("\nPlease insert some words as string 1: ");
    scanf("%[^\n]", yourString);

    printf("\nPlease insert some words again as string 2: ");
    scanf(" %[^\n]s", yourString2);

    printf("\nYou inserted: %s.\n", yourString);
    printf("And: %s.\n", yourString2);

    if (equalStrings(yourString,yourString2) == 1)
        printf("\nThey are the same.\n");
    else
        printf("\nThey are different.\n");

    return 0;

}

// the function to count the number of the characters in the string.
int stringLength(const char string[])
{
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    return count;
}

// the function to concatenate strings.
void concat(char after[], const char str1[], const char str2[])
{
    int i, j;

    for ( i = 0 ; str1[i] != '\0' ; i++)
    {
        after[i] = str1[i];
    }

    for ( j = 0 ; str2[j] != '\0' ; j++)
    {
        after[i+j] = str2[j];
    }

    after[i+j] = '\0';

}

// the function o compare if two strings are equal.
bool equalStrings(const char strx[], const char stry[])
{
    int k = 0;
    bool equal = 0;

    while (strx[k] == stry[k] &&
           strx[k] != '\0' &&
           stry[k] != '\0'
    )
    {
        k++;
    }

    if (strx[k] == '\0' && stry[k] == '\0'){
        equal = 1;
    }
    else{
        equal = 0;
    }

    return equal;

}
