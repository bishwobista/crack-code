"""
There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique

Example: 
Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
Output: 3
Explanation:
Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 4. Your tank = 4 - 1 + 5 = 8
Travel to station 0. Your tank = 8 - 2 + 1 = 7
Travel to station 1. Your tank = 7 - 3 + 2 = 6
Travel to station 2. Your tank = 6 - 4 + 3 = 5
Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.
Therefore, return 3 as the starting index.

"""


def canCompleteCircuit(gas, cost):
    """
    total is the total sum upto the current point
    curr is the current sum
    idx is VERY IMPORTANT HERE, and it is what we will be updating
    the idx is the key,
    Let's say that the curr has become negative for this index
    Ex. [1,2,-5,... for the 2nd index the curr is -3 now
    If the curr is -3 for now. We can't start at any point before index 2. for example
    index 0, 1 and 2 will not be the answer because even if we start from there
    at one point our gas will be negative
    Because it would have to cross that negative point and the gas will be zero
    So by process of elimination we can say that the answer is present from the next index
    But if curr never goes negative it means that the last possible poisitive value containing index contains the answer
    By going eliminating all the points we can find the unique start index
    """
    total, curr, idx = 0, 0, 0
    for i in range(len(gas)):
        t = gas[i] - cost[i]
        total += t
        curr += t
        if curr < 0:
            curr = 0
            idx = i + 1

    # if total is less than 0
    # we can't go through the full circle
    return -1 if total < 0 else idx


if __name__ == "__main__":
    answer = canCompleteCircuit([1, 2, 3, 4, 5], [3, 4, 5, 1, 2])

    # output 3
    print(answer)
