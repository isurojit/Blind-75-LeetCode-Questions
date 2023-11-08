/*Description:-
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

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


Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/
#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    // Create an unordered_map to store elements and their indices.
    std::unordered_map<int, int> numMap;

    // Initialize an empty vector to store the result.
    std::vector<int> result;

    // Iterate through the array.
    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        int complement = target - num;

        // Check if the complement exists in the unordered_map.
        if (numMap.find(complement) != numMap.end())
        {
            // If found, add the indices to the result vector.
            result.push_back(numMap[complement]);
            result.push_back(i);
            return result;
        }

        // If the complement is not found, add the current number and its index to the unordered_map.
        numMap[num] = i;
    }

    // If no solution is found, return an empty vector.
    return result;
}

int main()
{
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = twoSum(nums, target);

    for (int num : result)
    {
        std::cout << num << " ";
    }

    // Output: 0 1
    return 0;
}

/*
Explanation:

We use an unordered_map to store elements as keys and their corresponding indices as values. This allows us to quickly look up whether a complement is present in the array.

We iterate through the array using a for loop and calculate the complement of the current number by subtracting it from the target.

We check if the complement exists in the numMap by using the find method. If the complement is found, we add the indices to the result vector.

If the complement is not found, we add the current number and its index to the numMap for future reference.

If no solution is found after iterating through the entire array, the result vector remains empty, indicating that there is no valid solution.

The time complexity of this solution is O(n), where n is the number of elements in the input vector. This algorithm is efficient for finding two numbers that sum up to the target, and the unordered_map data structure provides fast lookup.
*/