// Call by Reference (using pointers)

// Addresses of variables are passed.

// Changes made in the function affect the original values.


#include <stdio.h>

void change(int *a) {  // Using Pointer
    *a = 20;
}

int main() {
    int x = 10;
    change(&x);
    printf("x = %d", x);  // Output: x = 20
}
