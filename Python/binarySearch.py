# Binary Search Function
def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right)
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1 

# Example Usage
sorted_array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
target_value = 7

result = binary_search(sorted_array, target_value)

if result != -1:
    print(f'Target {target_value} found at index {result}')
else:
    print(f'Target {target_value} not found in the array')
