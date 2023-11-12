'''
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
'''
def contains_duplicate(nums):
    # Create a set to store unique elements
    unique_elements = set()

    # Iterate through the array
    for num in nums:
        # If the element is already in the set, it's a duplicate
        if num in unique_elements:
            return True

        # Add the element to the set
        unique_elements.add(num)

    # No duplicates found
    return False

# Example usage
nums = [1, 2, 3, 4, 5]
has_duplicate = contains_duplicate(nums)

if has_duplicate:
    print("The array contains duplicates.")
else:
    print("The array does not contain duplicates.")

'''
Explaination:-

In this Python code:

-> The contains_duplicate function takes a list of integers (nums) 
and returns a boolean indicating whether there are any duplicates.

-> We use a set named unique_elements to keep track of unique 
values encountered so far.

-> We iterate through the array using a for loop, and for each 
element, we check if it is already present in the unique_elements 
set. If it is, we return True because we found a duplicate.

-> If no duplicates are found after iterating through the entire 
array, we return False.

This solution also has a time complexity of O(n), where n is the 
number of elements in the array, because it iterates through the 
array once, and set operations have average-case constant time 
complexity.






'''