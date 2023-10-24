#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Please specify the height of the triangle: ";
    cin >> n;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}