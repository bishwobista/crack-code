#Q: Given an array of integers, find two numbers such that they add up to a specific target sum. 
# You may assume that each input would have exactly one solution, and you cannot use the same element twice.

# Solution:

def two_sum(nums, target):
    """
    Find two numbers in the 'nums' list that add up to the 'target'.

    :param nums: List of integers
    :param target: Target sum
    :return: A tuple containing the indices of the two numbers that add up to the target, or None if no such pair exists.
    """
    num_dict = {}  # Create a dictionary to store numbers and their indices

    for i, num in enumerate(nums):
        complement = target - num  # Calculate the complement required to reach the target
        if complement in num_dict:
            # If the complement exists in the dictionary, return the indices of the two numbers
            return num_dict[complement], i
        # Otherwise, add the current number and its index to the dictionary
        num_dict[num] = i

    # If no such pair exists, return None
    return None

# Input from the user
nums = list(map(int, input("Enter a list of integers separated by spaces: ").split()))
target = int(input("Enter the target sum: "))

result = two_sum(nums, target)
if result is not None:
    index1, index2 = result
    print(f"Indices of the two numbers that add up to {target}: {index1}, {index2}")
else:
    print("No such pair exists.")
