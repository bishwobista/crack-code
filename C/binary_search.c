#include <stdio.h>

int binarySearch(int arr[], int size, int target){
     int left = 0;
     int right = size -1;

     while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found, return its index
        } else if (arr[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    return -1; // Element not found
}


/* EXAMPLE USAGE
int main() {
    int sortedArray[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int targetElement = 15;
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);

    int result = binarySearch(sortedArray, size, targetElement);

    if (result != -1) {
        printf("Element %d found at index %d.\n", targetElement, result);
    } else {
        printf("Element %d not found in the array.\n", targetElement);
    }

    return 0;
}
*/