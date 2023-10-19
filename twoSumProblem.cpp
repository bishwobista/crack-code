// Two Sum Problem Using CPP
#include <bits/stdc++.h>
using namespace std;
bool twoSum(int arr[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = 0;
            sum = arr[i] + arr[j];
            if (sum == target)
            {
                cout << "The two numbers are :" << arr[i] << " , " << arr[j] << endl;
                return true;
            }
        }
        return false;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    cout << twoSum(arr, n, target);
    return 0;
}
