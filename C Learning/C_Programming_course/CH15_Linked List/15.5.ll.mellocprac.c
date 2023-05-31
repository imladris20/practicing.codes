// �m�ߥH�ʺA�O����t�m��@linked list.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

// �w�qlinked list���`�I
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

    // ����O����
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
// ��function ���[ const �]�i�H���T�B��ä��|�y�����D
// ���[�W const �i�H���ѧ�n���{���X�iŪ�ʩM�i���@��
// �P�ɤ]��󦭦a�˴����b�����~
// �]���A��ĳ�b���ݭn�ק�`�I���e�����p�U�A�ϥ� const ���n���禡�ѼơA�H�W�[�{���X���w���ʡC
// �H�קK���H���p�߹��խק� head ���V���`�I�θ`�I���e
{
    int i = 1;
    while(head)
    {
        printf("node %d is %c, located at %p, and point at %p.\n\n", i, head->data, head, head->next);
        head = head->next;
        i++;
    }
}
