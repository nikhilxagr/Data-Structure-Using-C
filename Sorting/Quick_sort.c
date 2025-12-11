#include <stdio.h>

// Function to swap two values
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function (places pivot in correct position)
int partition(int arr[], int low, int high)
{

    int pivot = arr[high]; // choose last element as pivot
    int i = low - 1;       // index of smaller element

    for (int j = low; j < high; j++)
    {

        // If current element is smaller than pivot
        if (arr[j] < pivot)
        {
            i++; // move boundary of smaller elements
            swap(&arr[i], &arr[j]);
        }
    }

    // place pivot to correct position
    swap(&arr[i + 1], &arr[high]);

    return (i + 1); // return pivot index
}

// Quick Sort algorithm (recursive)
void quickSort(int arr[], int low, int high)
{

    if (low < high)
    {

        // Find pivot position
        int pi = partition(arr, low, high);

        // Recursively sort left part
        quickSort(arr, low, pi - 1);

        // Recursively sort right part
        quickSort(arr, pi + 1, high);
    }
}

int main()
{

    int arr[50], n;

    // Input number of elements
    printf("Enter total number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call Quick Sort
    quickSort(arr, 0, n - 1);

    // Display sorted array
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
