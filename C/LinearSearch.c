// Linear search function that returns the index of the element if found, else returns -1
#include <stdio.h>


int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    
    int arr[] = {12, 35, 69, 42, 16, 89, 76};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 16;
    int result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}
