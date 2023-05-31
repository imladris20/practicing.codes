#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

struct nameact{
    String fname;
    String lname;
};

void getinfo (struct nameact *pst);
void printinfo (struct nameact *pst);

int main(void)
{
    struct nameact insert;
    struct nameact *ptr;

    ptr = &insert;

    getinfo(ptr);
    printinfo(ptr);

    free(insert.fname);
    free(insert.lname);

    return 0;
}

void getinfo (struct nameact *pst)
{
    char name1[30];
    char name2[30];
    printf("Please enter your first name.\n");
    scanf("%[^\n]", name1);

    pst->fname = (char *) malloc(strlen(name1)+1);

    strcpy(pst->fname, name1);

    printf("Please enter your last name.\n");
    scanf(" %[^\n]", name2);
    pst->lname = (char *) malloc(strlen(name2)+1);
    strcpy(pst->lname, name2);
}

void printinfo (struct nameact *pst)
{
    printf("Your info: %s %s\n", pst->fname, pst->lname);

}