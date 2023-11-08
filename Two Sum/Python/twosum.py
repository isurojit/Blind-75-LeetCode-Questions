'''
Description:-
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
'''
def two_sum(nums, target):
    # Create a dictionary to store the elements and their indices.
    num_dict = {}

    # Iterate through the array.
    for i, num in enumerate(nums):
        # Calculate the complement of the current number needed to reach the target.
        complement = target - num

        # Check if the complement exists in the dictionary.
        if complement in num_dict:
            # If found, return the indices of the two numbers.
            return [num_dict[complement], i]

        # If the complement is not found, add the current number and its index to the dictionary.
        num_dict[num] = i

    # If no solution is found, return an empty list or handle the error as needed.
    return []

# Example usage:
nums = [2, 7, 11, 15]
target = 9
result = two_sum(nums, target)
print(result)  # Output: [0, 1]

'''
Explanation:

We use a dictionary (Python's dict) to store elements as keys and their corresponding indices as values. This allows us to quickly check whether a complement is present in the array.

We iterate through the array using a for loop and calculate the complement of the current number by subtracting it from the target.

We check if the complement exists in the num_dict by using the in operator. If the complement is found, we return the indices of the two numbers.

If the complement is not found, we add the current number and its index to the num_dict for future reference.

If no solution is found after iterating through the entire array, we return an empty list, indicating that there is no valid solution.

The time complexity of this solution is O(n), where n is the number of elements in the input array. This algorithm is efficient for finding two numbers that sum up to the target, and the dictionary (hash map) data structure provides a fast lookup mechanism.
'''