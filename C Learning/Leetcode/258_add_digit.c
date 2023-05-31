/*
Leetcode 258: add digit

Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

int addDigits(int num){
    ANSWER HERE
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int addDigits(int num);

int main()
{
    int num = 38;
    printf("Input:\t%d\n\n", num);
    printf("Output:\t%d\n", addDigits(num));

    return 0;
}

int addDigits(int num)
{
    int quotient, remainder;
    int input = num;

    while( input > 9)
    {
        quotient = input / 10;
        remainder = input % 10;
        input = quotient + remainder;
    }

    return input;

}
