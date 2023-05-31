#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

// �w�qlinked list���`�I
struct node{
    char data[30];
    struct node *next;
};

void push(struct node **push, String str);
void pop(struct node **pop);
void release(struct node **release);
void printNode(const struct node *head);

void printNode(const struct node *head)
// ��function ���[ const �]�i�H���T�B��ä��|�y�����D
// ���[�W const �i�H���ѧ�n���{���X�iŪ�ʩM�i���@��
// �P�ɤ]��󦭦a�˴����b�����~
// �]���A��ĳ�b���ݭn�ק�`�I���e�����p�U�A�ϥ� const ���n���禡�ѼơA�H�W�[�{���X���w���ʡC
// �H�קK���H���p�߹��խק� head ���V���`�I�θ`�I���e
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

void release(struct node **release)
{
    while(*release){
        struct node *temp = *release;
        *release = temp->next;
        free(temp);
    }
}