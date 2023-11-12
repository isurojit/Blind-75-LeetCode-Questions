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
#include <iostream>
#include <unordered_set>
#include <vector>

bool containsDuplicate(const std::vector<int> &nums)
{
    // Create a HashSet to store unique elements
    std::unordered_set<int> uniqueElements;

    // Iterate through the array
    for (int num : nums)
    {
        // If the element is already in the HashSet, it's a duplicate
        if (uniqueElements.count(num) > 0)
        {
            return true;
        }

        // Add the element to the HashSet
        uniqueElements.insert(num);
    }

    // No duplicates found
    return false;
}

int main()
{
    // Example usage
    std::vector<int> nums = {1, 2, 3, 4, 5};
    bool hasDuplicate = containsDuplicate(nums);

    if (hasDuplicate)
    {
        std::cout << "The array contains duplicates." << std::endl;
    }
    else
    {
        std::cout << "The array does not contain duplicates." << std::endl;
    }

    return 0;
}

/*
Explanation:-

In this code:

-> containsDuplicate is a function that takes a vector of integers
(nums) and returns a boolean indicating whether there are any duplicates.

-> We use an unordered_set named uniqueElements to keep track of unique
values encountered so far.

-> We iterate through the array, and for each element, we check if it is
already present in the uniqueElements set. If it is, we return true because
we found a duplicate.

-> If no duplicates are found after iterating through the entire array,
we return false.

This solution has a time complexity of O(n), where n is the number of
elements in the array, because it iterates through the array once,
and the HashSet operations have average-case constant time complexity.
*/