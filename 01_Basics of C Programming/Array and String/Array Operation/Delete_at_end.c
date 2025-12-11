#include <stdio.h>

int main() {
    // Initialize array with 4 elements
    int arr[] = {10, 20, 30, 40};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the array before deletion
    printf("Array before deletion\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Reduce the logical size of the array by 1 (last element is ignored)
    n--;

    // Print the array after deletion
    printf("\nArray after deletion\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
