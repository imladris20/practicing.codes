#include <stdio.h>
#include <stdlib.h>

// use only "if" to complete, don't use else or other function.

int main()
{
    int side1, side2, side3, sidesquare1, sidesquare2, sidesquare3;
    printf("Please enter the side lenght: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    sidesquare1 = side1*side1;
    sidesquare2 = side2*side2;
    sidesquare3 = side3*side3;

    // 直角三角形：任兩邊平方和等於第三邊平方
    if ( (sidesquare1 == side2+side3) || (sidesquare2 == side1+side3) || (sidesquare3 == side1+side2) ){
        printf("This is an rectangular triangle.\n");
    }
    // 等腰三角形：任兩邊相等但三邊不全相等
    if ((side1 == side2 || side2 == side3 || side3 == side1) && !(side1 == side2 && side2 == side3 && side1 == side3)){
        printf("This is a isosceles triangle.\n");
    }
    // 正三角形：三邊皆相等
    if (side1 == side2 && side2 == side3 && side1 == side3){
        printf("This is a regular triangle.\n");
    }
    // 普通三角形：任兩邊平方和不等於第三邊，且任兩邊不相等
    if (!((sidesquare1 == side2+side3) || (sidesquare2 == side1+side3) || (sidesquare3 == side1+side2)) && !(side1 == side2 || side2 == side3 || side3 == side1)){
        printf("This is a normal triangle.\n");
    }

    return 0;
}