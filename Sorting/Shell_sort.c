#include <stdio.h>

int main()
{

    int arr[50], n, i, j, gap, temp;

    // Ask user for number of elements
    printf("Enter total number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // ==========================================
    //              SHELL SORT LOGIC
    // ==========================================

    // Start with larger gaps, then reduce
    for (gap = n / 2; gap > 0; gap /= 2)
    {

        // Perform insertion-sort-like shifting using the current gap
        for (i = gap; i < n; i++)
        {

            temp = arr[i]; // element to be placed correctly
            j = i;

            // Shift earlier gap-sorted elements until the right spot is found
            while (j >= gap && arr[j - gap] > temp)
            {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            // Place element at correct position
            arr[j] = temp;
        }
    }

    // Output sorted array
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
  
    return 0;
}
