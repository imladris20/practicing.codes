// Leetcode 202: Happy Number //
// Level: easy
// Link: https://leetcode.com/problems/happy-number/
/* Description:

Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or itloops endlessly in a cycle, which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

*/

/*Begin code: 
bool isHappy(int n){

}

*/

// 本解法為土炮解法
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isHappy(int n);
int next_n(int n);
bool repeat(int n, int size, int* history);

bool isHappy(int n)
{
    int size = 0;

    // 因為最大會出現的數是9999999999，所以最大的平方就是9*9*10=810
    int history[810];

  //while(n、next_n 沒有重複出現過的話 -> function bool repeat)
    while(!repeat(n, size, history))
    {
        history[size] = n;
        //持續執行找next_n
        n = next_n(n);
        printf("The sum of square is: %d\n", n);
        size = size + 1;
    }

    return n==1;
}

bool repeat(int n, int size, int* history)
{
    for (int i = 0 ; i<size ; i++)
    {
        if( history[i] == n )
            return true;
    }

    return false;
}

int next_n(int n)
{
    int digit = 0;
    int sumSquare = 0;

    // int_max = 2147483647
    for (int i=0 ; i<10 ; i++)
    {
        digit = n % 10;
        sumSquare = sumSquare + digit*digit;
        n = n / 10;
    }

    return sumSquare;
}

int main()
{
    int n = 12309405;
    printf("Original n is: %d\n\n", n);
    int begin = n;
    bool answer = isHappy(n);
    printf("\nIs %d a happy number: %s\n", begin, answer? "YES":"NO");
}