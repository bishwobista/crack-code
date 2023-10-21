/*Code by PC*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
using namespace std;
#define MOD 1000000007
#define ll long long

void sol()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        string s = to_string(i);
        int m = s.size();
        for (int j = 0; j < m; j++)
        {
            if (i - (s[j] - '0') >= 0)
            {
                dp[i] = min(dp[i], dp[i - (s[j] - '0')]);
            }
        }
        if (dp[i] != INT_MAX)
        {
            dp[i] += 1;
        }
    }

    cout << dp[n] - 1 << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        sol();
    }
    return 0;
}