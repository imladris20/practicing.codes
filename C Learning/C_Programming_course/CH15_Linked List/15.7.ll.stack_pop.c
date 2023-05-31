// 練習用linked list 實作stack結構的push

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

// 定義linked list的節點
struct node{
    char data[30];
    struct node *next;
};

void push(struct node **push, String str);
void pop(struct node **pop);
void printNode(const struct node *head);

int main()
{
    struct node *head = NULL;
    push(&head, "Dodgers");
    push(&head, "Cardinals");
    push(&head, "Braves");
    push(&head, "Angel");
    printNode(head);

    pop(&head);
    printf("\nAfter popping\n");
    printNode(head);

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
        printf("node %d is %s, located at %p, and point at %p.\n\n", i, head->data, head, head->next);
        head = head->next;
        i++;
    }
}

void push(struct node **push, String str)
{
    struct node *temp = (struct node*) malloc (sizeof(struct node));
    strcpy(temp->data, str);
    temp->next = *push;
    *push = temp;
}

void pop(struct node **pop)
{
    struct node *temp;
    temp = *pop;
    *pop = temp->next;
    free(temp);
}
