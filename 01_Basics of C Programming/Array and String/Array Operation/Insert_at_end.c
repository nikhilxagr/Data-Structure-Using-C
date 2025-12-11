#include <stdio.h>

int main() {
    // Initial number of elements in the array
    int n = 4;

    // Array declared with size 5, initialized with 4 elements and an extra space (0 as placeholder)
    int arr[5] = {10, 20, 30, 40, 0};

    // Element to be inserted at the end
    int ele = 50;

    // Print array before insertion
    printf("Array before insertion\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Insert the new element at the end (at index n)
    arr[n] = ele;

    // Print array after insertion
    printf("\nArray after insertion\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
