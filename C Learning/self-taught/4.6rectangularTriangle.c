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

    // �����T���ΡG�����䥭��M����ĤT�䥭��
    if ( (sidesquare1 == side2+side3) || (sidesquare2 == side1+side3) || (sidesquare3 == side1+side2) ){
        printf("This is an rectangular triangle.\n");
    }
    // ���y�T���ΡG������۵����T�䤣���۵�
    if ((side1 == side2 || side2 == side3 || side3 == side1) && !(side1 == side2 && side2 == side3 && side1 == side3)){
        printf("This is a isosceles triangle.\n");
    }
    // ���T���ΡG�T��Ҭ۵�
    if (side1 == side2 && side2 == side3 && side1 == side3){
        printf("This is a regular triangle.\n");
    }
    // ���q�T���ΡG�����䥭��M������ĤT��A�B�����䤣�۵�
    if (!((sidesquare1 == side2+side3) || (sidesquare2 == side1+side3) || (sidesquare3 == side1+side2)) && !(side1 == side2 || side2 == side3 || side3 == side1)){
        printf("This is a normal triangle.\n");
    }

    return 0;
}