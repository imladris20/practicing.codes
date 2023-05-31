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

// 本解法二為類似greedy，思路為邊檢查錯誤邊馬上修正，為最差方法
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
    // 本解法二為類似greedy，思路為邊檢查錯誤邊馬上修正，為最差方法
    // 檢查原則：以兩兩相鄰元素為一組，左元素為0、而右元素不為0，就代表有錯、應該互換。
    // --> 交換完就要重新再從頭掃一次

    while(true)
    {
        // 一旦從頭，就要把count 歸零
        int count = 0;

        // 中間設i+1是因為底下的if條件有i+1，不可超過numsize
        for( int i=0 ; i+1<numsSize ; i++)
        {
            // nums = {0,1,0,3,12}
            if( nums[i]==0 && nums[i+1]!=0 )
            {
                nums[i] = nums[i+1];
                nums[i+1] = 0;
                count = count + 1;
                break;
            }
        }

        // 如果都沒有錯誤要交換，count 會保持0，即可跳出迴圈
        if (count == 0)
        {
            break;
        }
    }

}