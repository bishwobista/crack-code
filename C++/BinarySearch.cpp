#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 3, 5, 7, 9};
  int target = 5;
  int low = 0;
  int high = sizeof(arr) / sizeof(arr[0]) - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;

    if (arr[mid] == target) {
      cout << "The target element is found at index " << mid << endl;
      return 0;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  cout << "The target element is not found in the array" << endl;
  return 0;
}