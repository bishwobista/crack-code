"""
You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].

Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at nums[i], you can jump to any nums[i + j] where:

    0 <= j <= nums[i] and
    i + j < n

Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.

"""


def jump(nums):
    # Initialize the best list
    # so that every best[index] requires the minimum jumps
    best = [100000] * len(nums)
    # first index has no cost/ starting point
    best[0] = 0
    # before last index, because the last one is the answer
    for i in range(len(nums)-1):
        # from this position update all the right positions it can reach, so that their best is minimum
        for j in range(i, min(i+nums[i]+1, len(nums))):
            best[j] = min(best[j], best[i]+1)
    # since there is always an answer, we can be sure that the last position is reached
    return best[len(nums)-1]


if __name__ == "__main__":
    answer = jump([2, 3, 1, 1, 4])
    # output : 2
    print(answer)
