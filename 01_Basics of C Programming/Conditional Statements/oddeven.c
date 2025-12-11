#include <stdio.h>

int main() {
    int n, i;
    int sum_even = 0, sum_odd = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] % 2 == 0) {
            sum_even += arr[i];
        } else {
            sum_odd += arr[i];
        }
    }
    
    printf("Sum of even elements: %d\n", sum_even);
    printf("Sum of odd elements: %d\n", sum_odd);
    
    return 0;
}
