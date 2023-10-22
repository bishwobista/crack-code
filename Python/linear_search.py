# linear search function

def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1


# Example
numbers = [1, 2, 3, 24, 56, 96]
target_element = 24

index = linear_search(numbers, target_element)

if index != -1:
    print(f"{target_element} found at index {index}")
else:
    print(f"{target_element} not found in the list")
