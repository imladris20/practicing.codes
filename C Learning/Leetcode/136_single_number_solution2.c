// The second solution is using inner loop to check if it's same or not.
// Time complexity is O(n^2).

#include <stdio.h>
#include <stdlib.h>

int singleNumber(int* nums, int numsSize);

int main(void)
{

    int nums[]={3,2,2,1,1,4,4,6,7,6,7,3,9};
    int answer = 0;
    answer = singleNumber(&nums[0], 13);
    printf("%d", answer);

    return 0;

}

// nums = {3,2,2,1,1,4,4,6,7,6,7,3,9}
int singleNumber(int* nums, int numsSize)
{
    for (int i=0 ; i<numsSize ; i++)
    {
      int count = 0;

      // check how many numbers equal to nums[i]
      for ( int j=0 ; j<numsSize ; j++)
      {
        if (nums[i] == nums[j])
          count++;
      }
      
      // single number should only be counted one time.
      if (count == 1)
        return nums[i];
    }

    // if there is no single number 
    return 0;
}