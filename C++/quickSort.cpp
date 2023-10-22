#include <iostream>

// Function to swap two elements
void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
  // Set the rightmost element as the pivot
  int pivot = arr[high];

  // Index of smaller element
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) {
    // If the current element is smaller than or equal to the pivot
    if (arr[j] <= pivot) {
      i++; // Increment index of smaller element
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    // Partition the array
    int pivotIndex = partition(arr, low, high);

    // Recursively sort the sub-arrays
    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
  }
}

int main() {
  int n;
  //Enter length of array
  std::cin >> n;

  int* arr = new int[n];
  //Enter contents of array
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  quickSort(arr, 0, n - 1);

  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  delete[] arr;
  return 0;
}