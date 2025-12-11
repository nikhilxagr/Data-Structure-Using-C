#include <stdio.h>

// =============================
// Function to merge two halves
// =============================
void merge(int arr[], int left, int mid, int right)
{

    int i = left;    // starting index of left half
    int j = mid + 1; // starting index of right half
    int k = 0;       // index for temporary array

    int temp[right - left + 1]; // temporary array

    // Merge both halves into temp[]
    while (i <= mid && j <= right)
    {

        // choose smaller element
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left half (if any)
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements of right half (if any)
    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy temp[] back into original array arr[]
    for (i = left, k = 0; i <= right; i++, k++)
    {
        arr[i] = temp[k];
    }
}

// =============================
// Recursive Merge Sort Function
// =============================
void mergeSort(int arr[], int left, int right)
{

    if (left < right)
    {

        int mid = (left + right) / 2;

        // Sort left half
        mergeSort(arr, left, mid);

        // Sort right half
        mergeSort(arr, mid + 1, right);

        // Merge the two sorted halves
        merge(arr, left, mid, right);
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

    // Call Merge Sort
    mergeSort(arr, 0, n - 1);

    // Print sorted array
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
