// Leetcode 053: Maximum Subarray //
// Level: medium
// Link:https://leetcode.com/problems/maximum-subarray/
// Description:
// Given an integer array nums, find the subarray with the largest sum, and return its sum.

/* Begin code: 

int maxSubArray(int* nums, int numsSize){

} 

*/

// 本解法為土炮解法
// time complexity: O(n^2)

#include <stdio.h>
#include <stdlib.h>

int maxSubArray(int* nums, int numsSize);

int main()
{

    int nums[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int output;

    printf("起點\t終點\t加總\n\n");
    
    output = maxSubArray(nums, 9);

    printf("\n\nThe sum of the maximum subarray is: %d\n", output);

    return 0;

}

int maxSubArray(int* nums, int numsSize)
{
    int sum = 0;
    // 最大值初始宣告不能亂設，萬一設得比最大值還大，就會使答案錯誤，因此最後設int_min或其他很小的值
    int max = -2147483648;

    // 決定起點
    for ( int i=0 ; i<numsSize ; i++)
    {
        // 換起點的時候要把總和重新歸)
        sum = 0;
        // 決定終點
        for ( int j=i ; j<numsSize ; j++)
        {
            // 從起點加到終點
            sum = sum + nums[j];
            printf("%d\t%d\t%d\n", i, j, sum);

            // 一旦總和有大於目前的max，就取代
            if (sum>max)
            {
                max = sum;
            }
        }
    }

    return max;
    
} 