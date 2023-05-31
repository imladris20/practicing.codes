// 認識linked list實作
// ver2就是把ver1的內容function化

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

// 定義linked list的節點
struct node{
    char data[30];
    struct node *next;
};

void printNode(const struct node *head);

int main()
{
    // 宣告三個節點
    struct node s1,s2,s3;

    // 為第一個節點的data欄位賦值
    strcpy(s1.data, "Apple");

    // 第一個節點指向第二個節點的起始位址
    s1.next = &s2;

    strcpy(s1.next->data, "Ball");  // 意思等同strcpy(s2.data, "Ball");

    // 第二個節點指向第三個節點的起始位址
    s2.next = &s3;

    strcpy(s1.next->next->data, "Cat"); // 意思等同strcpy(s3.data, "Cat");

    s1.next->next->next = 0; // 把節點s3的next指向null，linked list的節點結尾pointer通常要指向0

    // 宣告一個名叫now、可以指node的pointer
    // struct node *now;
    // now = &s1;  // 把pointer now指向第一個節點

    printNode(&s1);

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
        printf("node %d is %s.\n\n", i, head->data);
        head = head->next;
        i++;
    }
}

