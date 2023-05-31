#include "llfunction.h"

int main()
{
    struct node *mylist = 0;
    push(&mylist, "Dodgers");
    push(&mylist, "Cardinals");
    push(&mylist, "Brewers");
    push(&mylist, "Angel");

    printf("Linked list at the beginning\n\n");
    printNode(mylist);

    // 加入新節點
    struct node insert;
    fflush(stdin);
    printf("Please insert the words you want to add: ");
    char add[30];
    char* padd;
    padd = &add[0];
    scanf("%[^\n]", padd);
    strcpy(insert.data, padd);
    insert.next = 0;

    struct node *head = 0;
    struct node *nnew = 0;
    struct node *now = 0;
    struct node *pre = 0;

    head = mylist;
    nnew = &insert;
    now = head;

    while( now != 0 && strncmp(now->data, nnew->data, 2) < 0 )
    {
        pre = now;
        now = now->next;
    }

    if(pre == 0){
        nnew->next = head;
        head = nnew;
    }else{
        pre->next = nnew;
        nnew->next = now;
    }

    printf("\n\nLinked List after insertion\n\n");

    printNode(mylist);

    release(&mylist);
    printNode(mylist);

    return 0;

}
