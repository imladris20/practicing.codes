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
    
    // 最大值初始宣告為int_min，以免設了一個比subarray加總最大值還大的值，就會return錯誤
    int max = -2147483648;

    // 宣告一個陣列來儲存以現在位置為終點的加總最大值
    int cur_sum[9];

    // 範例nums     : {-2,1,-3,4,-1,2,1,-5,4}
    // 最後cur_nums : {-2,1,-2,4, 3,5,6, 1,5}

    cur_sum[0] = nums[0];

    for ( int i=1 ; i<numsSize ; i++)
    {
        // 若前一個位置的cur_sum為正，則代表可使加總更大，所以要納入前一個位置當作subarray起點
        if (cur_sum[i-1]>0)
        {
            cur_sum[i] = cur_sum[i-1]+nums[i];
        }else{ // 若為負，則代表單純現在位置的值就是加總最大，所以現在的位置就是subarray起點
        cur_sum[i] = nums[i];
        }
                
    }

    for ( int j=0 ; j<numsSize ; j++)
    {

        // 印出cur_sum 檢查是否正確
        printf("cur_sum[%d]: %d\n", j, cur_sum[j]);
        
        // cur_sum中的最大值即為應return 的max值
        if (cur_sum[j] > max)
            max = cur_sum[j];
        
        // 印出max來看看，若max沒有再變大，則第一次出現max值的地方就是subarray終點
        printf("max: %d\n\n", max);

    }

    return max;
    
} 