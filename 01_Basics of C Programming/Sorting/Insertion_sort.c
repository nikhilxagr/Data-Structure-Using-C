// Insertion Sort
#include <stdio.h>
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = 5;  // Total number of elements

    // Insertion Sort Logic
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // Element to insert
        int j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to right
            j--;
        }

        // Insert key at the correct position
        arr[j + 1] = key;
    }

    // Print the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
