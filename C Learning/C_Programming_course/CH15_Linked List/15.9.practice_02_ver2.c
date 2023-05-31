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

    // 用54-56行這個方法也能把輸入緩衝區清空
    // 因此後面的scanf就不需要在%前面加空格
    // 但要跑迴圈比較浪費時間
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    fflush(stdin);

    // 挑一節點刪除
    printf("Please insert the words you want to remove: ");
    char rem[30];
    char* prem;
    prem = &rem[0];
    scanf("%[^\n]", prem);

    head = 0;
    now = 0;
    pre = 0;

    head = mylist;
    now = head;
    pre = head;

    while( now!= 0){
        if(strcmp(now->data, prem) == 0){
            if(now == head){
                head = now->next;
                free(now);
                break;
            }else{
                pre->next = now->next;
                free(now);
                break;
            }
        }else{
            pre = now;
            now = now->next;
        }
    }

    printf("\n\nLinked List after removing: \n\n");
    printNode(mylist);

    release(&mylist);
    printNode(mylist);

    return 0;

}
