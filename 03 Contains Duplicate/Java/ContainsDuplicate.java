/*
Problem:-
Given an integer array nums, return true if any value appears at 
least twice in the array, and return false if every element is distinct.

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
/*
Pre Explain- The problem can be solved using a similar approach in Java, 
using a HashSet to keep track of unique elements in the array. 
*/

import java.util.HashSet;

public class ContainsDuplicate {

    public static boolean containsDuplicate(int[] nums) {
        // Create a HashSet to store unique elements
        HashSet<Integer> uniqueElements = new HashSet<>();

        // Iterate through the array
        for (int num : nums) {
            // If the element is already in the HashSet, it's a duplicate
            if (uniqueElements.contains(num)) {
                return true;
            }

            // Add the element to the HashSet
            uniqueElements.add(num);
        }

        // No duplicates found
        return false;
    }

    public static void main(String[] args) {
        // Example usage
        int[] nums = {1, 2, 3, 4, 5};
        boolean hasDuplicate = containsDuplicate(nums);

        if (hasDuplicate) {
            System.out.println("The array contains duplicates.");
        } else {
            System.out.println("The array does not contain duplicates.");
        }
    }
}

/*
Explanation:-
n this Java code:

-> containsDuplicate is a static method that takes an array of integers
(nums) and returns a boolean indicating whether there are any duplicates.

-> We use a HashSet named uniqueElements to keep track of unique 
values encountered so far.

->We iterate through the array, and for each element, we check if 
it is already present in the uniqueElements set. If it is, 
we return true because we found a duplicate.

-> If no duplicates are found after iterating through the entire array, we return false.

This solution, like the C++ one, has a time complexity of O(n), 
where n is the number of elements in the array, because it 
iterates through the array once, and the HashSet operations 
have average-case constant time complexity.






*/