// �{��linked list��@
// ver3�N�O��ver2 �令��loop�h��Jlinked list���e

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

// �w�qlinked list���`�I
struct node{
    char data[30];
    struct node *next;
};

void printNode(const struct node *head);

int main()
{
    // �ŧi�T�Ӹ`�I�A�ŧi���`�I���A���}�C�O�]����Kloop�ϥ�
    struct node nodeArray[3];

    // �ŧi�T�Ӱ�Ū�r��A�ŧi���r�ꫬ�A�����а}�C
    char *stringArray[3] = {"Apple","Ball","Cat"};

    // �ŧi�@�Ӹ`�I���Шӵ�Loop��J��ƨ�Linked list
    struct node *fill;
    fill = &nodeArray[0];

    // �}�l�j���J�Ai�N���N�O�ثefill���Щҫ����`�I
    for ( int i=0 ; i<3 ; i++ )
    {
        // �ƻs�r����а}�C��`�I�}�C
        strcpy(fill->data, stringArray[i]);

        // �Yi��2�A�hfill�ثe�ҫ����`�I��next����Jnull
        if ( i==2 ){
            fill->next = 0;
        }else{ //�Yi�|����2�A�hfill�ثe�ҫ����`�I��next�N�O��J�U�Ӹ`�I���_�l��}
            fill->next = &nodeArray[i+1];
        }

        // fill�ҫ��`�I��next�ҫ��令��fill�ӫ�
        fill = fill->next;
    }

    printNode(&nodeArray[0]);

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
        printf("node %d is %s and located at %p.\n\n", i, head->data, head->next);
        head = head->next;
        i++;
    }
}