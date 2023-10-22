// Linear search function that returns the index of the element if found, else returns -1
#include <bits/stdc++.h>
using namespace std;


int linearSearch(const vector<int> &arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {12, 35, 69, 42, 16, 89, 76};
    int key = 16;
    int result = linearSearch(arr, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
