#include <stdio.h>

// Function to merge two subarrays
void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;
    
    // Compare elements from both subarrays and merge them in sorted order
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    
    // Copy the remaining elements of left subarray
    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }
    
    // Copy the remaining elements of right subarray
    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Function to perform merge sort
void mergeSort(int arr[], int n) {
    if (n > 1) {
        int mid = n / 2;
        int left[mid];
        int right[n - mid];
        
        // Divide the array into two subarrays
        for (int i = 0; i < mid; i++) {
            left[i] = arr[i];
        }
        for (int i = mid; i < n; i++) {
            right[i - mid] = arr[i];
        }
        
        // Recursive calls to sort the subarrays
        mergeSort(left, mid);
        mergeSort(right, n - mid);
        
        // Merge the sorted subarrays
        merge(arr, left, mid, right, n - mid);
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    mergeSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
