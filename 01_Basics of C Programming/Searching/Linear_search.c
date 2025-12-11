#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    
    for (int i = 0; i < n; i++) {
        // Check if current element matches the key
        if (arr[i] == key) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if key not found
}

int main() {
    // Array to search in
    int arr[] = {10, 50, 30, 70, 80, 60, 20, 90, 40};

    // Calculate number of elements
    int n = sizeof(arr) / sizeof(arr[0]);

    // Element to search for
    int key = 30;

    // Call the search function
    int index = linearSearch(arr, n, key);

    // Display result
    if (index == -1)
        printf("Key Not Found\n");
    else
        printf("Key Found at Index: %d\n", index);

    return 0;
}
