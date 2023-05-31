#include <stdio.h>
#include <stdlib.h>

typedef char* String;

// �۩w�qitem ���A
struct item {
    String itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *i);
void printItem(struct item *i);

int main(void)
{
    struct item item;           // �гy�@��item���A���ܼơA�W�r��item
    struct item *pitem;         // �гy�@�ӫ��Vitem ���A�����СA���ЦW��*pitem

    pitem = &item;              // ����pitem���V�ܼ�item

    pitem->itemName = (char *) malloc (30*sizeof(char));    // �t�m30�r���j�p���Ŷ���pitem���Щҫ��V���ܼ�item����itemName����(�]���Ochar*���A�A�ҥH�ݭn�@�ӪŶ�)

    readItem(pitem);
    printItem(pitem);

    free(pitem->itemName);

    return 0;

}

void readItem(struct item *i)
{
    printf("Please insert the name of the item: ");
    scanf("%[^\n]", i->itemName);   //itemname�O�@�ӫ��СA�ҥH���ݭn���}��&�b�e��
    printf("Please insert its quantity: ");
    scanf(" %d", &i->quantity);     //quantity�Bprice�Oint��double���A�A�G�ݭn���}��&
    printf("Please insert its price: ");
    scanf("%f", &i->price);
    
    i->amount = ((float)i->quantity)*(i->price);    //��quantity�j���૬��float�A�Pprice�ۭ��~�i�H����float

}

void printItem(struct item *i)
{

    printf("\nBelow is the product information.\n\n");
    printf("Name: %s", i->itemName);
    printf("\nQuantity: %d", i->quantity);
    printf("\nPrice: %.2f dollars", i->price);
    printf("\nAmount: %.2f dollars", i->amount);
    printf("\n\n");

}