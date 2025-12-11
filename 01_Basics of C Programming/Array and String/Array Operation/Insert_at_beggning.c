#include <stdio.h>

int main() {
    // Array of size 6 with first 4 elements initialized, last slot left for insertion
    int arr[6] = {10, 20, 30, 40, 0};

    // Current number of elements in the array
    int n = 4;

    // Element to insert at the beginning
    int element = 50;

    // Print the array before insertion
    printf("Array before insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Shift all elements one position to the right to make space at index 0
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the beginning
    arr[0] = element;

    // Print the array after insertion
    printf("\nArray after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
