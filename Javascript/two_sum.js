function twoSum(nums, target) {
  const numMap = {}; // Object to store numbers and their indices

  for (let i = 0; i < nums.length; i++) {
    const complement = target - nums[i];
    if (numMap[complement] !== undefined) {
      return [numMap[complement], i];
    }
    numMap[nums[i]] = i;
  }

  return null;
}

// Example usage:
const numbers = [2, 7, 11, 15];
const target = 9;
const result = twoSum(numbers, target);

if (result) {
  console.log("Indices of the two numbers:", result);
} else {
  console.log("No solution found.");
}
