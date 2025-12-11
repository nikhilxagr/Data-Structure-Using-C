#include <stdio.h>
int main() {

    // Step 1: Declare and initialize the array
    int arr[] = {64, 25, 12, 22, 11};
     int n=5;                               //For runtime:> int n = sizeof(arr) / sizeof(arr[0]);

    // Step 2: Selection Sort logic
    for (int i = 0; i < n - 1; i++) {
        int min = i; // Assume the current index has the smallest value

        // Find the actual smallest value in the rest of the array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j; // Update the index of the smallest value
            }
        }
        // Swap the smallest value with the current position
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // Step 3: Print the sorted array
    printf("Sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
