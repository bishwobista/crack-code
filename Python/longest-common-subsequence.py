# Q: Find the length of the longest common subsequence in two strings.

# Solution:
#Using Dynammic Programming

def longest_common_subsequence(s1, s2):
    # Get the lengths of the input strings
    m, n = len(s1), len(s2)
    
    # Create a 2D table (matrix) to store the lengths of LCS for subproblems
    dp = [[0] * (n + 1) for _ in range(m + 1)]

    # Iterate through the input strings to fill in the table
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if s1[i - 1] == s2[j - 1]:
                # If characters match, extend the LCS by 1 and take the value from the diagonal cell.
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                # If characters don't match, take the maximum of the cell above or the cell to the left.
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

    # The value in the bottom-right cell of the table is the length of the LCS.
    return dp[m][n]
