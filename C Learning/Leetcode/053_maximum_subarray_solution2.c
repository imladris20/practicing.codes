// Leetcode 053: Maximum Subarray //
// Level: medium
// Link:https://leetcode.com/problems/maximum-subarray/
// Description:
// Given an integer array nums, find the subarray with the largest sum, and return its sum.

/* Begin code: 

int maxSubArray(int* nums, int numsSize){

} 

*/

// ���Ѫk���B��Dinamic programming 
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
    
    // �̤j�Ȫ�l�ŧi��int_min�A�H�K�]�F�@�Ӥ�subarray�[�`�̤j���٤j���ȡA�N�|return���~
    int max = -2147483648;

    // �ŧi�@�Ӱ}�C���x�s�H�{�b��m�����I���[�`�̤j��
    int cur_sum[9];

    // �d��nums     : {-2,1,-3,4,-1,2,1,-5,4}
    // �̫�cur_nums : {-2,1,-2,4, 3,5,6, 1,5}

    cur_sum[0] = nums[0];

    for ( int i=1 ; i<numsSize ; i++)
    {
        // �Y�e�@�Ӧ�m��cur_sum�����A�h�N��i�ϥ[�`��j�A�ҥH�n�ǤJ�e�@�Ӧ�m��@subarray�_�I
        if (cur_sum[i-1]>0)
        {
            cur_sum[i] = cur_sum[i-1]+nums[i];
        }else{ // �Y���t�A�h�N���²{�b��m���ȴN�O�[�`�̤j�A�ҥH�{�b����m�N�Osubarray�_�I
        cur_sum[i] = nums[i];
        }
                
    }

    for ( int j=0 ; j<numsSize ; j++)
    {

        // �L�Xcur_sum �ˬd�O�_���T
        printf("cur_sum[%d]: %d\n", j, cur_sum[j]);
        
        // cur_sum�����̤j�ȧY����return ��max��
        if (cur_sum[j] > max)
            max = cur_sum[j];
        
        // �L�Xmax�ӬݬݡA�Ymax�S���A�ܤj�A�h�Ĥ@���X�{max�Ȫ��a��N�Osubarray���I
        printf("max: %d\n\n", max);

    }

    return max;
    
} 