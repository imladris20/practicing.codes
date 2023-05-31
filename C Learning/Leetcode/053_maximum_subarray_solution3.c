// Leetcode 053: Maximum Subarray //
// Level: medium
// Link:https://leetcode.com/problems/maximum-subarray/
// Description:
// Given an integer array nums, find the subarray with the largest sum, and return its sum.

/* Begin code:

int maxSubArray(int* nums, int numsSize){

}

*/

// 本解法為運用Dinamic programming
// time complexity: O(n)

#include <stdio.h>
#include <stdlib.h>

int maxSubArray(int* nums, int numsSize);

int main()
{

    int nums[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int output;

    output = maxSubArray(nums, 9);
    printf("\nThe sum of the maximum subarray is: %d\n", output);

    return 0;

}

int maxSubArray(int* nums, int numsSize)
{
    int max = nums[0];
    int sum = 0;

    for(int i = 0; i < numsSize; i++){
        sum = sum+nums[i];              // nums:{-2,1,-3,4,-1,2,1,-5,4}
        if(sum < nums[i])               // 初始max=-2，sum=0
            sum = nums[i];              // i=0，sum=-2, because -2!<nums[0], sum still = -2, because -2 !> max=-2, max still = -2
        if(sum > max)                   // i=1，sum=-1, because -1 <nums[1], sum = 1,        because 1   > max=-2, max = 1
            max = sum;                  // i=2，sum=-4, because -4 <nums[2], sum =-3,        because -3 !> max= 1, max still =1
    }                                   // i=3, sum= 1, because 1  <nums[3], sum = 4,        because 4   > max= 1, max = 4
    return max;                         // i=4, sum= 3, because 3 !<nums[4], sum still = 3,  because 3  !> max= 4, max still = 4
                                        // i=5, sum= 5, because 5 !<nums[5], sum still = 5,  because 5   > max= 4, max=5
}                                       // i=6, sum= 6, because 6 !<nums[6], sum still = 6,  becuase 6   > max= 5, max=6
                                        // i=7, sum= 1, because 1 !<nums[7], sum still = 1,  because 1  !> max= 6, max still = 6
                                        // i=8, sum= 5, because 5 !<nums[8], sum still = 5,  because 5  !> max= 6, max still = 6
                                        // At the end of the loop, sum = 5, max=6
                                        // 與solution2 比較，sum 其實就等於是cur_sum陣列最後一項的值，max則相同
