// 練習以動態記憶體配置實作linked list.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

// 定義linked list的節點
struct node{
    char data;
    struct node *next;
};

void printNode(const struct node *head);

int main()
{
    int i;
    struct node *head = 0, *now = 0;

    for ( i=0 ; i<5 ; i++)
    {
        now = (struct node*)malloc(sizeof(struct node));
        now->data = 'A'+i;
        now->next = 0;

        now->next = head;
        head = now;
        printNode(head);
        printf("next create\n\n\n");
    }

    printf("\nCreating finished.\n\n");
    printf("\nStart releasing nodes.\n\n");

    // 釋放記憶體
    while(head){
        struct node *del = head;
        head = head->next;
        printNode(head);
        free(del);
        printf("next round\n\n");
    }

    printf("\nThe end.\n");

    return 0;
}

void printNode(const struct node *head)
// 此function 不加 const 也可以正確運行並不會造成問題
// 但加上 const 可以提供更好的程式碼可讀性和可維護性
// 同時也能更早地檢測到潛在的錯誤
// 因此，建議在不需要修改節點內容的情況下，使用 const 來聲明函式參數，以增加程式碼的安全性。
// 以避免有人不小心嘗試修改 head 指向的節點或節點內容
{
    int i = 1;
    while(head)
    {
        printf("node %d is %c, located at %p, and point at %p.\n\n", i, head->data, head, head->next);
        head = head->next;
        i++;
    }
}
