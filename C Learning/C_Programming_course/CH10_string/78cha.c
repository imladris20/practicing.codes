#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <stdbool.h>

void reverseString(char rev[],char ori[]);
void bsortString();

int main()
{
    char strori[100];
    char strrev[100];

    printf("\nPlease enter some words: ");
    scanf("%[^\n]", strori);

    printf("\nThe orinal string is \"%s\".\n", strori);

    reverseString(strrev,strori);
    bsortString();

    return 0;
}

void reverseString(char rev[],char ori[])
{

    int length = strlen(ori) -1 ;
    int revleng = 0;

    for (int i = length ; i >= 0 ; i--)
    {
        rev[revleng] = ori[i];
        revleng = revleng + 1;
    }

    rev[revleng] = '\0';

    printf("\nAfter reversed is \"%s\".\n\n\n", rev);

}

void bsortString()
{
    int amount;
    char strinput[25][50];
    char temp[50];

    printf("Input the amount of strings that you want to test: ");
    scanf("%d", &amount);

    int n = amount;
    int i, j;

    printf("\nInput %d strings sequentially and press enter after finish inserting each word: \n", n);

    for ( i=0 ; i < n ; i++)
    {
        scanf("%s", strinput[i]);
    }

    printf("\n\n");

    printf("Now we are going to bubble sort them: \n");

    for ( i=1 ; i<n ; i++)
        for ( j=0 ; j<n-i ; j++)
        {
            if (strcmp(strinput[j], strinput[j+1]) > 0){
                strncpy(temp, strinput[j], sizeof(temp) - 1 );
                strncpy(strinput[j], strinput[j+1], sizeof(strinput[j]) - 1);
                strncpy(strinput[j+1], temp, sizeof(strinput[j+1]) - 1);
            }
        }

    for ( i=0 ; i < n ; i++)
    {
        printf("%s\n", strinput[i]);
    }

}
