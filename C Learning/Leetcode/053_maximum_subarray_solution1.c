// Leetcode 053: Maximum Subarray //
// Level: medium
// Link:https://leetcode.com/problems/maximum-subarray/
// Description:
// Given an integer array nums, find the subarray with the largest sum, and return its sum.

/* Begin code: 

int maxSubArray(int* nums, int numsSize){

} 

*/

// ���Ѫk���g���Ѫk
// time complexity: O(n^2)

#include <stdio.h>
#include <stdlib.h>

int maxSubArray(int* nums, int numsSize);

int main()
{

    int nums[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int output;

    printf("�_�I\t���I\t�[�`\n\n");
    
    output = maxSubArray(nums, 9);

    printf("\n\nThe sum of the maximum subarray is: %d\n", output);

    return 0;

}

int maxSubArray(int* nums, int numsSize)
{
    int sum = 0;
    // �̤j�Ȫ�l�ŧi����ó]�A�U�@�]�o��̤j���٤j�A�N�|�ϵ��׿��~�A�]���̫�]int_min�Ψ�L�ܤp����
    int max = -2147483648;

    // �M�w�_�I
    for ( int i=0 ; i<numsSize ; i++)
    {
        // ���_�I���ɭԭn���`�M���s�k)
        sum = 0;
        // �M�w���I
        for ( int j=i ; j<numsSize ; j++)
        {
            // �q�_�I�[����I
            sum = sum + nums[j];
            printf("%d\t%d\t%d\n", i, j, sum);

            // �@���`�M���j��ثe��max�A�N���N
            if (sum>max)
            {
                max = sum;
            }
        }
    }

    return max;
    
} 