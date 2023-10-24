#include <iostream>
#include <vector>
using namespace std;

// Function to find the maximum number in the array
int findMax(vector<int>& arr, int n) {
    int maxNum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

// Function to perform counting sort based on the digit represented by exp
void countingSort(vector<int>& arr, int n, int exp) {
    vector<int> output(n); // Output array
    vector<int> count(10, 0); // Count array for digits 0 to 9
    
    // Count occurrences of digits in the input array
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }
    
    // Update count[i] to store actual position of this digit in output array
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    
    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    
    // Copy the output array to arr[] so that arr[] now contains sorted numbers according to current digit
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Radix Sort function
void radixSort(vector<int>& arr, int n) {
    // Find the maximum number to know the number of digits
    int maxNum = findMax(arr, n);
    
    // Perform counting sort for every digit, starting from the least significant digit to the most significant digit
    for (int exp = 1; maxNum / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = arr.size();
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    radixSort(arr, n); //function calling
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}