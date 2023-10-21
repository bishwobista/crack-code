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
using namespace std;
#define MOD 1000000007
#define ll long long

void sol()
{
    long long n;
    cin >> n;
    ll ans = 1;
    while (n--)
    {
        ans = (ans * 2) % MOD;
    }
    cout << ans % MOD << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while (t--)
    {
        sol();
    }
    return 0;
}