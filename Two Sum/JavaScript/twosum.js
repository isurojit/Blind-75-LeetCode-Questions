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

function twoSum(nums, target) {
  // Create an object to store the elements and their indices.
  const numMap = {};

  // Iterate through the array.we also can use forEach().
  for (let i = 0; i < nums.length; i++) {
    const num = nums[i];
    // Calculate the complement of the current number needed to reach the target.
    const complement = target - num;

    // Check if the complement exists in the object (hash map).
    if (numMap.hasOwnProperty(complement)) {
      // If found, return the indices of the two numbers.
      return [numMap[complement], i];
    }

    // If the complement is not found, add the current number and its index to the object.
    numMap[num] = i;
  }

  // If no solution is found, return an empty array or handle the error as needed.
  return [];
}

// Example usage:
const nums = [2, 7, 11, 15];
const target = 9;
const result = twoSum(nums, target);
console.log(result); // Output: [0, 1]

/*Explanation:

We use an object (numMap) as a hash map to store the elements of the array as keys and their corresponding indices as values. This allows us to quickly look up whether a complement is present in the array.

We iterate through the array using a for loop and calculate the complement of the current number by subtracting it from the target.

We check if the complement exists in the numMap by using the hasOwnProperty method. If the complement is found, we return the indices of the two numbers.

If the complement is not found, we add the current number and its index to the numMap for future reference.

If no solution is found after iterating through the entire array, we return an empty array, indicating that there is no valid solution.

The time complexity of this solution is O(n) because we iterate through the array once, and the hash map operations (insertions, lookups) are typically O(1) on average.
*/
