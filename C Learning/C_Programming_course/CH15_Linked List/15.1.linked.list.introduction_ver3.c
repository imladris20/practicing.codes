// 認識linked list實作
// ver3就是把ver2 改成用loop去填入linked list內容

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
    // 宣告三個節點，宣告為節點型態的陣列是因為方便loop使用
    struct node nodeArray[3];

    // 宣告三個唯讀字串，宣告為字串型態的指標陣列
    char *stringArray[3] = {"Apple","Ball","Cat"};

    // 宣告一個節點指標來給Loop填入資料到Linked list
    struct node *fill;
    fill = &nodeArray[0];

    // 開始迴圈填入，i代表的就是目前fill指標所指的節點
    for ( int i=0 ; i<3 ; i++ )
    {
        // 複製字串指標陣列到節點陣列
        strcpy(fill->data, stringArray[i]);

        // 若i為2，則fill目前所指的節點的next應填入null
        if ( i==2 ){
            fill->next = 0;
        }else{ //若i尚不為2，則fill目前所指的節點的next就是填入下個節點的起始位址
            fill->next = &nodeArray[i+1];
        }

        // fill所指節點的next所指改成給fill來指
        fill = fill->next;
    }

    printNode(&nodeArray[0]);

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
        printf("node %d is %s and located at %p.\n\n", i, head->data, head->next);
        head = head->next;
        i++;
    }
}