#include <stdio.h>

int main() {
    int array[50], position, i, n, value;

    // Ask user for the number of elements in the array
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);

    // Take input of n elements from the user
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    // Ask for the position where the new element should be inserted
    printf("Please enter the location where you want to insert a new element\n");
    scanf("%d", &position);

    // Ask for the value of the new element to be inserted
    printf("Please enter the value\n");
    scanf("%d", &value);

    // Shift elements one position to the right from the insertion point
    for (i = n - 1; i >= position - 1; i--)
        array[i + 1] = array[i];

    // Insert the new value at the specified position
    array[position - 1] = value;

    // Print the updated array
    printf("Resultant array is\n");
    for (i = 0; i <= n; i++)
        printf("%d\n", array[i]);

    return 0;
}
