// �{��linked list �i����ʧ@�Gsearch, insert, delete

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
void builtLLByloop(struct node destination[], const char *stringArray[], int size);
void searchLL(struct node destination[]);

int main()
{
    // �ŧi�T�Ӹ`�I���@�Ӱ}�C�A�ŧi���`�I���A���}�C�O�]����Kloop�ϥ�
    struct node nodeArray[4];

    // �ŧi�T�Ӱ�Ū�r��A�ŧi����Ū�r�ꫬ�A�����а}�C
    const char *stringArray[4] = {"Angel","Brewers","Cardinals","Dodger"};

    builtLLByloop(nodeArray, stringArray,6);
    printNode(&nodeArray[0]);
    searchLL(nodeArray);

    return 0;
}

void builtLLByloop(struct node destination[], const char *stringArray[], int size)
{
    // �ŧi�@�Ӹ`�I���Шӵ�Loop��J��ƨ�Linked list
    struct node *fill;
    fill = &destination[0];

    // �}�l�j���J�Ai�N���N�O�ثefill���Щҫ����`�I
    for ( int i=0 ; i<size ; i++ )
    {
        // �ƻs�r����а}�C��`�I�}�C
        strcpy(fill->data, stringArray[i]);

        // �Yi��2�A�hfill�ثe�ҫ����`�I��next����Jnull
        if ( i==size-1 ){
            fill->next = 0;
        }else{ //�Yi�|����2�A�hfill�ثe�ҫ����`�I��next�N�O��J�U�Ӹ`�I���_�l��}
            fill->next = &destination[i+1];
        }

        // fill�ҫ��`�I��next�ҫ��令��fill�ӫ�
        fill = fill->next;
    }
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