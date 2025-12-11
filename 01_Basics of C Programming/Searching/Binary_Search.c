// Binary Search in C at compile time 


#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Key found
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Key not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}





// Binary Search in C at run time

// #include <stdio.h>

// int binarySearch(int arr[], int size, int key) {
//     int low = 0, high = size - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == key) {
//             return mid; 
//         } else if (arr[mid] < key) {
//             low = mid + 1; 
//         } else {
//             high = mid - 1; 
//         }
//     }

//     return -1; 
// }

// int main() {
//     int size, key;


//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];

    
//     printf("Enter %d sorted elements:\n", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

   
//     printf("Enter the number to search: ");
//     scanf("%d", &key);

//     int result = binarySearch(arr, size, key);

//     if (result != -1) {
//         printf("Element found at index %d\n", result);
//     } else {
//         printf("Element not found in the array\n");
//     }

//     return 0;
// }
