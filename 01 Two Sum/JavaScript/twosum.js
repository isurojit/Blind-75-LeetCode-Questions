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
//Understanding Map
/*const myMap = new Map();

//Adding Key Value pairs
myMap.set("1", "Suro");
myMap.set("2", "Ayush");
myMap.set("3", "Alok");

//retrieving value
console.log(myMap.get("3"));

//check if a key exsist or not
console.log(myMap.has("6"));

//Itreating over key-value pairs
myMap.forEach((value, key) => {
  console.log(`${key}: ${value}`);
});
*/
const twoSum = (nums, target) => {
  const numMap = new Map();
  for (let i = 0; i < nums.length; i++) {
    const remain = target - nums[i];

    if (numMap.has(remain)) {
      return [numMap.get(remain), i];
    }
    numMap.set(nums[i], i); //used as key value pair as it's Map
  }
  //no valid solution found
  return [];
};

// Example:
const nums1 = [2, 7, 11, 15];
const target1 = 9;
console.log(twoSum(nums1, target1));
