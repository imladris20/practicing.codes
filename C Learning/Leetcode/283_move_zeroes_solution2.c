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

// ���Ѫk�G������greedy�A��������ˬd���~�䰨�W�ץ��A���̮t��k
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
    // ���Ѫk�G������greedy�A��������ˬd���~�䰨�W�ץ��A���̮t��k
    // �ˬd��h�G�H���۾F�������@�աA��������0�B�ӥk��������0�A�N�N�����B���Ӥ����C
    // --> �洫���N�n���s�A�q�Y���@��

    while(true)
    {
        // �@���q�Y�A�N�n��count �k�s
        int count = 0;

        // �����]i+1�O�]�����U��if����i+1�A���i�W�Lnumsize
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

        // �p�G���S�����~�n�洫�Acount �|�O��0�A�Y�i���X�j��
        if (count == 0)
        {
            break;
        }
    }

}