// 練習linked list 可執行動作：search, insert, delete

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
void builtLLByloop(struct node destination[], const char *stringArray[], int size);
void searchLL(struct node destination[]);
void insertLL(struct node destination[]);
void deleteLL(struct node destination[]);

int main()
{
    // 宣告三個節點為一個陣列，宣告為節點型態的陣列是因為方便loop使用
    struct node nodeArray[6];

    // 宣告三個唯讀字串，宣告為唯讀字串型態的指標陣列
    const char *stringArray[4] = {"Angel","Brewers","Cardinals","Dodger"};

    builtLLByloop(nodeArray, stringArray,4);
    printNode(&nodeArray[0]);
    insertLL(nodeArray);
    printNode(&nodeArray[0]);
    deleteLL(nodeArray);
    printNode(&nodeArray[0]);

    return 0;
}

void builtLLByloop(struct node destination[], const char *stringArray[], int size)
{
    // 宣告一個節點指標來給Loop填入資料到Linked list
    struct node *fill;
    fill = &destination[0];

    // 開始迴圈填入，i代表的就是目前fill指標所指的節點
    for ( int i=0 ; i<size ; i++ )
    {
        // 複製字串指標陣列到節點陣列
        strcpy(fill->data, stringArray[i]);

        // 若i為2，則fill目前所指的節點的next應填入null
        if ( i==size-1 ){
            fill->next = 0;
        }else{ //若i尚不為2，則fill目前所指的節點的next就是填入下個節點的起始位址
            fill->next = &destination[i+1];
        }

        // fill所指節點的next所指改成給fill來指
        fill = fill->next;
    }
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

void searchLL(struct node destination[])
{
    char *targetString;
    char searchword[30];
    targetString = &searchword[0];
    printf("Please insert what you want to search: ");
    scanf("%[^\n]", targetString);

    struct node *search;
    search = &destination[0];

    while(search !=0)
    {
        if(strcmp(search->data, targetString) == 0)
        {
            printf("\n\"%s\" is founded!\n\n", targetString);
            break;
        }

        search = search->next;

        if (search == 0){
        printf("\nFounding finish. There is nothing you want.\n\n");
        }
    }
}

void insertLL(struct node destination[])
{
    char *targetString;
    char searchword[30];
    targetString = &searchword[0];
    printf("After which word you want to insert a new word: ");
    scanf("%[^\n]", targetString);

    struct node *search;
    search = &destination[0];

    while(search !=0)
    {
        if(strcmp(search->data, targetString) == 0)
        {
            printf("\n\"%s\" is founded!\n\n", targetString);

            char *ptrString;
            char insertword[30];
            ptrString = &insertword[0];
            fflush(stdin);
            printf("Insert the word you want to add: ");
            scanf(" %[^\n]", ptrString);

            struct node *loc = search->next;

            struct node *newNode = (struct node *)malloc(sizeof(struct node));

            strcpy(newNode->data, ptrString);
            newNode->next = loc;
            search->next = newNode;
            fflush(stdin);
            printf("\n");
            
            break;
        }

        search = search->next;

        if (search == 0){
        printf("\nInserting failed. There is no \"%s\" in the linked list.\n\n", targetString);
        }
    }
}

void deleteLL(struct node destination[])
{
    char *targetString;
    char searchword[30];
    targetString = &searchword[0];
    printf("Please type the string that you want to delete: ");
    scanf(" %[^\n]", targetString);

    struct node *search;
    search = &destination[0];

    struct node *pre = search;

    while(search !=0)
    {
        if(strcmp(search->data, targetString) == 0)
        {
            printf("\n\"%s\" is founded!\n\n", targetString);
            printf("Delete Success! \"%s\" is removed.\n\n", search->data);
            pre->next = search->next;
            break;
        }

        pre = search;
        search = search->next;
    }

    if (search == 0){
    printf("\nDeleting failed. There is no \"%s\" in the linked list.\n\n", targetString);
    }

}
