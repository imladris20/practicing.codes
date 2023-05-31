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

// 本解法較佳，使用tortoise and hare algorithm (finding cycle)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isHappy(int n);
int next_n(int n);
bool repeat(int n, int size, int* history);

bool isHappy(int n)
{
    int fast = n; // 兔子走兩步
    int slow = n; // 烏龜走一步

    // 如果兔子跟烏龜撞在一起，就代表有循環
    do{
        slow = next_n(slow);
        fast = next_n(fast);
        fast = next_n(fast);
    }while (fast != slow);

    // 有循環後確認是否為1，若不為1則代表是非happy number
    return fast == 1;
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