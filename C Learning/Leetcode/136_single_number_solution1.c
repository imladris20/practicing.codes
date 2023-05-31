// The first solution is using bitwise operator "XOR".
/// Time complexity is O(n), linear time.

/* Why using XOR?

    XOR -> If two bits are same, return 0; if different, return 1.
    3^2 == 1
    3^0 == 3
    2^3 == 1
    3^3 == 0

    3 = 00000000 00000000 00000000 00000011
    2 = 00000000 00000000 00000000 00000010
    1 = 00000000 00000000 00000000 00000001
    0 = 00000000 00000000 00000000 00000000

We could conclude that:

(1) A^0 -> A. Anynumber XOR with 0 will be the same.
(2) A^A -> 0. Anynumber XOR with itself will become 0.
(3) A^B == B^A. XOR is commutative(º¡¨¬¥æ´««ß).


Therefore, if anynumber appears two times, will return 0.
And the number appears only one time, which is what the question ask, will remain itself.

so single number == nums[0]^nums[1]^nums[2]^......^nums[numsSize-1]

*/

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

// nums = {4,1,2,1,2}
int singleNumber(int* nums, int numsSize)
{
    int sn = 0;
    int i;
    for ( i=0 ; i<numsSize ; i++)
    {
        sn = sn^nums[i];
    }

    return sn;
}