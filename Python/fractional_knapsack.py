WEIGHT = 1
PROFIT = 2
FRACTION = 3


def maximize_profit(weight: list, profit: list, max_weight: int):
    """
    Since we can use fraction of any weight we can greedly choose weight with
    maximum profit per unit weight first.
    We can sort both arrays based on profit per unit weight and keep adding
    weight until we reach max_weight
    """

    n = len(weight)
    arr = [[profit[i] / weight[i], weight[i], profit[i], 0] for i in range(n)]
    arr.sort(reverse=True)

    profit = 0
    for i in range(n):
        if arr[i][WEIGHT] <= max_weight:
            arr[i][FRACTION] = 1
            max_weight -= arr[i][WEIGHT]
            profit += arr[i][PROFIT]
        else:
            arr[i][FRACTION] = max_weight / arr[i][WEIGHT]
            max_weight = 0
            profit += arr[i][PROFIT] * arr[i][FRACTION]

    return profit, [arr[i][1:] for i in range(n)]


if __name__ == "__main__":
    max_profit, fractions = maximize_profit([3, 5, 9, 2, 5], [12, 24, 45, 10, 25], 20)
    print(f"Max Profit: {max_profit}")
    print(f"Fractions: {fractions}")
