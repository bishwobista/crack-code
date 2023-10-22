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
#include <cstring>
using namespace std;
#define MOD 1073741824
#define ll long long

void sol()
{
    int n = 8;
    vector<string> arr(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    bool b[15];            // diagonals check
    int pos[8];            // for columns
    iota(pos, pos + 8, 0); // it will fill the array with 0, 1, 2, 3, 4, 5, 6, 7
    do
    {
        bool ok = 1; // to check if it is available in that row
        for (int i = 0; i < 8; i++)
        {
            if (arr[i][pos[i]] == '*')
            {
                ok = 0;
            }
        }
        memset(b, 0, 15); // it copies the value 0 to boolean array b , to the first 15(size) characters
        for (int i = 0; i < 8; i++)
        {
            if (b[i + pos[i]]) // if down_top diagonal is not free
            {
                ok = 0;
            }
            b[i + pos[i]] = 1;
        }
        memset(b, 0, 15); // it copies the value 0 to boolean array b , to the first 15 characters
        for (int i = 0; i < 8; i++)
        {
            if (b[i - pos[i] + 7]) // if top_down diagonal is not free
            {
                ok = 0;
            }
            b[i - pos[i] + 7] = 1;
        }
        ans += ok;

    } while (next_permutation(pos, pos + 8));
    cout << ans << endl;
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