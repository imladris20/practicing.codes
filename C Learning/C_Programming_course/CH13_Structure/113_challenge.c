#include <stdio.h>
#include <stdlib.h>

typedef char* String;

// 自定義item 型態
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
    struct item item;           // 創造一個item型態的變數，名字為item
    struct item *pitem;         // 創造一個指向item 型態的指標，指標名為*pitem

    pitem = &item;              // 指標pitem指向變數item

    pitem->itemName = (char *) malloc (30*sizeof(char));    // 配置30字元大小的空間給pitem指標所指向的變數item中的itemName元素(因為是char*型態，所以需要一個空間)

    readItem(pitem);
    printItem(pitem);

    free(pitem->itemName);

    return 0;

}

void readItem(struct item *i)
{
    printf("Please insert the name of the item: ");
    scanf("%[^\n]", i->itemName);   //itemname是一個指標，所以不需要取址符&在前面
    printf("Please insert its quantity: ");
    scanf(" %d", &i->quantity);     //quantity、price是int跟double型態，故需要取址符&
    printf("Please insert its price: ");
    scanf("%f", &i->price);
    
    i->amount = ((float)i->quantity)*(i->price);    //把quantity強制轉型為float，與price相乘才可以仍為float

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