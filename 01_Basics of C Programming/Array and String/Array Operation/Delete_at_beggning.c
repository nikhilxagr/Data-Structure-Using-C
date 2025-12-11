#include <stdio.h>

int main() {
    // Initialize the array with 4 elements
    int arr[] = { 10, 20, 30, 40 };

    // Calculate number of elements in the array
    int n= 4;          //int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    printf("Array before deletion\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Shift all elements one position to the left,
    // effectively removing the first element
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }

    // Reduce the array size by 1
    n--;

    // Print the updated array after deletion
    printf("\nArray after deletion\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
