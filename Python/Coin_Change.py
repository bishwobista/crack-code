#Q: Given a set of coin denominations and a target amount, find the number of ways to make change 
# for the target amountusing the provided coins. You can use each coin an unlimited number of times.

#Solution:

def count_coin_change_ways(coins, amount):
    """
    Calculate the number of ways to make change for the given 'amount' using the given 'coins'.

    :param coins: List of coin denominations
    :param amount: Target amount for which change needs to be made
    :return: Number of ways to make change for the given amount
    """
    # Initialize a dynamic programming table where dp[i] represents the number of ways
    # to make change for the amount 'i'.
    dp = [0] * (amount + 1)
    dp[0] = 1  # There is one way to make change for zero amount (using no coins)

    # Iterate through each coin denomination
    for coin in coins:
        # Update the dynamic programming table for each amount from 'coin' to 'amount'
        for i in range(coin, amount + 1):
            dp[i] += dp[i - coin]  # Accumulate the number of ways considering the current coin

    return dp[amount]  # The result is the number of ways to make change for the given amount

# Input from the user
coin_input = input("Enter coin denominations separated by spaces: ")
coins = list(map(int, coin_input.split()))
amount = int(input("Enter the target amount: "))

ways = count_coin_change_ways(coins, amount)
print(f"Number of ways to make change for {amount} using coins {coins}: {ways}")
