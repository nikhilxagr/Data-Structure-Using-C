#include <stdio.h>

int main() {
    // Initialize the array with 4 elements
    int arr[] = {10, 20, 30, 40};

    // Calculate number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Position of the element to delete (2nd position, i.e., index 1)
    int pos = 2;

    // Print the array before deletion
    printf("Array before deletion\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Shift elements to the left from the deletion position
    for (int i = pos; i < n; i++) {
        arr[i - 1] = arr[i];
    }

    // Reduce the logical size of the array by 1 if position is valid
    if (pos <= n)
        n--;

    // Print the array after deletion
    printf("\nArray after deletion\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
