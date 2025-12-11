#include <stdio.h>

int main()
{

    int arr[50], n, i, j, key;

    // Take how many elements
    printf("Enter total number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // ====================================
    //         INSERTION SORT LOGIC
    // ====================================

    // Start from 2nd element (i = 1)
    for (i = 1; i < n; i++)
    {

        key = arr[i]; // Element to be placed correctly
        j = i - 1;

        // Move greater elements one position ahead
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // shift element
            j--;
        }

        // Place key at correct position
        arr[j + 1] = key;
    }

    // Print sorted array
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
