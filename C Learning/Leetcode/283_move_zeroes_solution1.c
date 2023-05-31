// Leetcode 283: Move Zeroes //
// Level: easy
// Link:https://leetcode.com/problems/move-zeroes/
// Description:
/* Given an integer array nums, move all 0's to the end of it,
while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array. */

/* Begin code:

void moveZeroes(int* nums, int numsSize){

}

*/

// 本解法為最佳解，思路為運用two pointers概念，把全部非0值先往前放，剩下再全放0
// time complexity:O(n)

#include <stdio.h>
#include <stdlib.h>

void moveZeroes(int* nums, int numsSize);

int main()
{
    int nums[5] = {0,1,0,3,12};
    moveZeroes(nums, 5);
    for(int i=0 ; i<5 ; i++)
    {
        printf("reordered array: %d\n", nums[i]);
    }
    return 0;

}

void moveZeroes(int* nums, int numsSize)
{
    int j=0;

    // {0,1,0,3,12}
    // {1,3,12, , }
    // {1,3,12,0,0}

    // Two pointers，j永遠比i慢，所以可以先放非0元素，確保不會被放錯
    for( int i=0 ; i<numsSize ; i++)
    {
        printf("orinal array: %d\n", nums[i]);
        if( nums[i] != 0)
        {
            nums[j] = nums[i];
            j = j + 1;
        }
    }

    // 剩下再放0
    for( ; j < numsSize ; j++)
    {
        nums[j] = 0;
    }

    return;

}