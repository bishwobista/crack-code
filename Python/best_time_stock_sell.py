"""
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

"""


def maxProfit(prices):
    """
    Since we need to find a single time where the profit is low and high and we need to buy earlier so
    we instantiate low first.
    For each of the prices, we update low if it is large
    Then, we find the answer by maximizing the profit.
    By being greedy we can find the best point to buy and sell to make the best profit 
    """

    low = prices[0]
    profit = 0

    for i in range(len(prices)):
        if low > prices[i]:
            low = prices[i]
        profit = max(profit, prices[i]-low)

    return profit


if __name__ == "__main__":
    answer = maxProfit([7, 1, 5, 3, 6, 4])
    # output : 5
    print(answer)
