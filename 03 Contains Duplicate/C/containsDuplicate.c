/*
Problem:-
Given an integer array nums, return true if any value
appears at least twice in the array, and return false if
every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true


Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/
/*Pre Explanation:-
To solve the problem of determining whether any value appears at least
twice in an integer array, you can use various data structures.
One common approach is to use a HashSet to keep track of unique elements as
you iterate through the array. If you encounter an element that is already in the HashSet,
then you know there is a duplicate.
*/

#include <stdio.h>

// Function to check if the array contains duplicates
int containsDuplicate(int nums[], int size)
{
    // Assuming the array elements are non-negative integers
    // If the range of values is known, you can use a specific size for the array
    // For this example, let's assume the range is [0, 10000]
    const int MAX_VALUE = 10001;

    // Create an array to track the occurrence of each element
    int occurrence[MAX_VALUE] = {0};

    // Iterate through the array
    for (int i = 0; i < size; i++)
    {
        // If the element has already occurred, it's a duplicate
        if (occurrence[nums[i]] > 0)
        {
            return 1; // 1 indicates true (contains duplicates)
        }

        // Mark the occurrence of the element
        occurrence[nums[i]]++;
    }

    // No duplicates found
    return 0; // 0 indicates false (no duplicates)
}

int main()
{
    // Example usage
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    // Check for duplicates
    if (containsDuplicate(nums, size))
    {
        printf("The array contains duplicates.\n");
    }
    else
    {
        printf("The array does not contain duplicates.\n");
    }

    return 0;
}

/*Explaination:-
In this C code:

-> The containsDuplicate function takes an array of integers (nums)
and its size (size) and returns an integer (1 for true if there
are duplicates, 0 for false if there are no duplicates).

-> We assume a maximum value for the array elements (in this
example, the range is [0, 10000]), and we create an array named
occurrence to track the occurrence of each element.

-> We iterate through the array, and for each element, we check
if its occurrence count is greater than 0. If it is, we return 1
indicating true (contains duplicates). Otherwise, we mark the
occurrence of the element in the occurrence array.

-> The main function demonstrates the usage with an example array.

This solution has a time complexity of O(n), where n is the number
of elements in the array, because it iterates through the array
once, and the array operations have constant time complexity.
*/