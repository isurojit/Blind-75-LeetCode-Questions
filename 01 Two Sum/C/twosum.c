/*Description:-
Given an array of integers nums and an integer target, return indices
of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution,
and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.


Follow-up: Can you come up with an algorithm that is less
than O(n2) time complexity?
*/
#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    // Create an array to store the result indices.
    int *result = (int *)malloc(2 * sizeof(int));

    // Create an array to store the indices of elements.
    int *numIndices = (int *)malloc(numsSize * sizeof(int));

    // Initialize the indices array with -1 values.
    for (int i = 0; i < numsSize; i++)
    {
        numIndices[i] = -1;
    }

    // Iterate through the array.
    for (int i = 0; i < numsSize; i++)
    {
        int num = nums[i];
        int complement = target - num;

        // Check if the complement exists in the indices array.
        if (numIndices[complement] != -1)
        {
            // If found, assign the indices to the result array.
            result[0] = numIndices[complement];
            result[1] = i;
            *returnSize = 2;
            free(numIndices);
            return result;
        }

        // If the complement is not found, store the current index in the indices array.
        numIndices[num] = i;
    }

    // If no solution is found, return an empty array.
    *returnSize = 0;
    free(numIndices);
    return result;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize = 0;
    int *result = twoSum(nums, 4, target, &returnSize);

    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }

    free(result);

    // Output: 0 1
    return 0;
}

/*
Explanation:

We use dynamically allocated arrays in C to store the result indices
and the indices of elements. The result array stores the final
answer, while the numIndices array stores the indices of elements
encountered so far.

We initialize the numIndices array with -1 values to indicate that
no element has been encountered.

We iterate through the array using a for loop and calculate the
complement of the current number by subtracting it from the target.

We check if the complement exists in the numIndices array by checking
if it's not equal to -1. If the complement is found, we assign the
indices to the result array.

If the complement is not found, we store the current index in the
numIndices array for future reference.

If no solution is found after iterating through the entire array,
the result array is empty, and the returnSize is set to 0.

This C solution has a time complexity of O(n), where n is the
number of elements in the input array. It efficiently finds two
numbers that sum up to the target using dynamically allocated
arrays to manage memory. Don't forget to free the allocated memory
to prevent memory leaks.
*/