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

// 本解法三為類似bubble sort，每一次只移動一個0，逐步把每個0往右移，最多只會移動numsSize個
// time complexity:O(n^2)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void moveZeroes(int* nums, int numsSize);

int main()
{
    int nums[5] = {0,1,0,3,12};

    for(int i=0 ; i<5 ; i++)
    {
        printf("Original array: %d\n", nums[i]);
    }

    moveZeroes(nums, 5);
    printf("\n\n");

    for(int i=0 ; i<5 ; i++)
    {
        printf("reordered array: %d\n", nums[i]);
    }
    return 0;

}

void moveZeroes(int* nums, int numsSize)
{
    // 每一次只移動一個0，逐步把每個0往右移，最多只會移動numsSize次，類似bubble sort
    for ( int i=0 ; i<numsSize ; i++)
    {
        for ( int j=0 ; j+1<numsSize ; j++)
        {
            if( nums[j] == 0 && nums[j+1] != 0)
            {
                nums[j] = nums[j+1];
                nums[j+1] = 0;
            }
            // nums: {0,1,0,3,12}
            // i=0, j=0 -> {1,0,0,3,12}
            // i=0, j=1 -> {1,0,0,3,12}
            // i=0, j=2 -> {1,0,3,0,12}
            // i=0, j=3 -> {1,0,3,12,0}
            // i=0 結束，移動最右邊的0到最右邊
            // i=1 結束 -> {1,3,12,0,0}
            // i=2 結束，移動第二右邊的0到次右邊
        }
    }
}