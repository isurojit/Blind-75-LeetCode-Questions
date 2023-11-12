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

import java.util.HashMap;

public class TwoSum {
    public int[] twoSum(int[] nums, int target) {
        // Create a HashMap to store elements and their indices.
        HashMap<Integer, Integer> numMap = new HashMap<>();
        
        // Iterate through the array.
        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            int complement = target - num;
            
            // Check if the complement exists in the HashMap.
            if (numMap.containsKey(complement)) {
                // If found, return the indices of the two numbers.
                return new int[]{numMap.get(complement), i};
            }
            
            // If the complement is not found, add the current number and its index to the HashMap.
            numMap.put(num, i);
        }
        
        // If no solution is found, return an empty array or handle the error as needed.
        return new int[0];
    }

    public static void main(String[] args) {
        TwoSum solution = new TwoSum();
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        int[] result = solution.twoSum(nums, target);
        for (int num : result) {
            System.out.print(num + " ");
        }
        // Output: 0 1
    }
}

/*
Explanation:

-> We create a HashMap (numMap) to store elements as keys and their 
indices as values. This allows us to quickly look up whether a 
complement is present in the array.

-> We iterate through the array using a for loop and calculate the 
complement of the current number by subtracting it from the target.

-> We check if the complement exists in the numMap by using the 
containsKey method. If the complement is found, we return the 
indices of the two numbers.

-> If the complement is not found, we add the current number and 
its index to the numMap using the put method for future reference.

-> If no solution is found after iterating through the entire array, 
we return an empty integer array (int[0]), indicating that there is 
no valid solution.

This solution has a time complexity of O(n), where n is the number of 
elements in the input array, and it's efficient for finding two 
numbers that sum up to the target.
*/