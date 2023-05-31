// �{��linked list��@
// ver2�N�O��ver1�����efunction��

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
    // �ŧi�T�Ӹ`�I
    struct node s1,s2,s3;

    // ���Ĥ@�Ӹ`�I��data�����
    strcpy(s1.data, "Apple");

    // �Ĥ@�Ӹ`�I���V�ĤG�Ӹ`�I���_�l��}
    s1.next = &s2;

    strcpy(s1.next->data, "Ball");  // �N�䵥�Pstrcpy(s2.data, "Ball");

    // �ĤG�Ӹ`�I���V�ĤT�Ӹ`�I���_�l��}
    s2.next = &s3;

    strcpy(s1.next->next->data, "Cat"); // �N�䵥�Pstrcpy(s3.data, "Cat");

    s1.next->next->next = 0; // ��`�Is3��next���Vnull�Alinked list���`�I����pointer�q�`�n���V0

    // �ŧi�@�ӦW�snow�B�i�H��node��pointer
    // struct node *now;
    // now = &s1;  // ��pointer now���V�Ĥ@�Ӹ`�I

    printNode(&s1);

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
        printf("node %d is %s.\n\n", i, head->data);
        head = head->next;
        i++;
    }
}

