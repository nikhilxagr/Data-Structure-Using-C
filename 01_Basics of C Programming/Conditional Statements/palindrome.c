#include <stdio.h>

int main() {
    int num, reversed = 0, temp, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num; // Store the original number
    
    while (temp > 0) {
        digit = temp % 10;              // Get last digit
        reversed = (reversed * 10) + digit; // Reverse the number
        temp = temp / 10;               // Remove last digit
    }
    
    // Check if original and reversed numbers are the same
    if (num == reversed)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
