//  6. Passing Arrays as Parameters

// Arrays are always passed by reference


#include <stdio.h>

void display(int arr[], int size) {
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    display(nums, 5);
    return 0;
}
