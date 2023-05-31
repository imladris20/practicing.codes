// 認識linked list實作

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

// 定義linked list的節點
struct node{
    char data[30];
    struct node *next;
};

int main()
{
    // 宣告三個節點
    struct node s1,s2,s3;

    // 為第一個節點的data欄位賦值
    strcpy(s1.data, "Apple");

    // 第一個節點指向第二個節點的起始位址
    s1.next = &s2;

    strcpy(s1.next->data, "Ball");  // 意思等同strcpy(s2.data, "Ball");

    s2.next = &s3;

    strcpy(s1.next->next->data, "Cat"); // 意思等同strcpy(s3.data, "Cat");

    s1.next->next->next = 0; // 把節點s3的next指向null，linked list的節點結尾pointer通常要指向0

    // 宣告一個名叫now、可以指node的pointer 
    struct node *now;
    now = &s1;  // 把pointer now指向第一個節點

    int i = 1;

    while(now) // now != 0 就會進行，等於還沒到結尾
    {
        printf("node %d is %s.\n\n", i, now->data);     //依序印出目前now指標所指節點的data欄位
        now = now->next;    //印完一個，就把目前now所指節點的next所指的節點改成給now來指
        i++;
    }

    return 0;
}

