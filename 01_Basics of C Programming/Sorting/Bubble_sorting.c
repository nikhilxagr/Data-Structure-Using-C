//Bubble Sorting

#include <stdio.h>

int main() {
    int arr[] = {6, 0, 3, 5};
    int n = 4;  // Number of elements

    // Bubble Sort logic
    for (int i = 0; i < n - 1; i++) {
        // Compare and swap adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
 