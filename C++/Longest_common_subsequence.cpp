// Dynamic programming(Memoization) approachto find longest common 
// Approach:-
// Create a recursive function. Also create a 2D array to store the result of a unique state. 
// During the recursion call, if the same state is called more than once, then we can directly return the answer stored for that state instead of calculating again.

#include <iostream>
#include <vector>
#include <string>
#include<cstring>
#include<algorithm>
using namespace std;

int lcs(char *X, char *Y, int m, int n,
        vector<vector<int>> &dp)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1, dp);

    if (dp[m][n] != -1)
    {
        return dp[m][n];
    }
    return dp[m][n] = max(lcs(X, Y, m, n - 1, dp),
                          lcs(X, Y, m - 1, n, dp));
}

int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";

    int m = strlen(X);
    int n = strlen(Y);
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    cout << "Length of LCS is " << lcs(X, Y, m, n, dp);

    return 0;
}

// Time Complexity: O(m * n) 
// Auxiliary Space: O(m * n) 