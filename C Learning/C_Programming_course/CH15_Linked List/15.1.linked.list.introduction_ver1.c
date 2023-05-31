// �{��linked list��@

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

// �w�qlinked list���`�I
struct node{
    char data[30];
    struct node *next;
};

int main()
{
    // �ŧi�T�Ӹ`�I
    struct node s1,s2,s3;

    // ���Ĥ@�Ӹ`�I��data�����
    strcpy(s1.data, "Apple");

    // �Ĥ@�Ӹ`�I���V�ĤG�Ӹ`�I���_�l��}
    s1.next = &s2;

    strcpy(s1.next->data, "Ball");  // �N�䵥�Pstrcpy(s2.data, "Ball");

    s2.next = &s3;

    strcpy(s1.next->next->data, "Cat"); // �N�䵥�Pstrcpy(s3.data, "Cat");

    s1.next->next->next = 0; // ��`�Is3��next���Vnull�Alinked list���`�I����pointer�q�`�n���V0

    // �ŧi�@�ӦW�snow�B�i�H��node��pointer 
    struct node *now;
    now = &s1;  // ��pointer now���V�Ĥ@�Ӹ`�I

    int i = 1;

    while(now) // now != 0 �N�|�i��A�����٨S�쵲��
    {
        printf("node %d is %s.\n\n", i, now->data);     //�̧ǦL�X�ثenow���Щҫ��`�I��data���
        now = now->next;    //�L���@�ӡA�N��ثenow�ҫ��`�I��next�ҫ����`�I�令��now�ӫ�
        i++;
    }

    return 0;
}

